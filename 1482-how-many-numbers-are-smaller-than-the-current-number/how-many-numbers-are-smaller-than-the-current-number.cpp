class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                if(nums[i]>nums[j]){
                    count++;
                }
                }
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};
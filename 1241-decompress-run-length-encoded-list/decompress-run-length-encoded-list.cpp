class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int count=0;
        for(int i=0;i<n;i+=2){
    
            while(count<nums[i]){
                ans.push_back(nums[i+1]);
                count++;
            }
            count=0;
        }

return ans;
        
    }
};
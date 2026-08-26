class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int> count(1001, 0);

        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == key) {
                count[nums[i + 1]]++;
            }
        }

        int target = 0;
        int maxCount = 0;

        for(int i = 0; i < count.size(); i++) {
            if(count[i] > maxCount) {
                maxCount = count[i];
                target = i;
            }
        }

        return target;
    }
};
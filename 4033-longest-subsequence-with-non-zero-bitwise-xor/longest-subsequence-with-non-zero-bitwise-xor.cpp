class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        for (int x : nums) xr ^= x;

        int n = nums.size();
        if (xr != 0) return n;

        for (int x : nums) {
            if (x != 0) return n - 1;
        }

        return 0;
    }
};
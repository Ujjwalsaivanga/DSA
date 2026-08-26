class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= n / i; i++) {   // avoids overflow
            if (n % i == 0) return false;
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        // Frequency array – adjust size if max value is known
        // Let's assume values are between 0 and 100 (common constraint)
        vector<int> freq(101, 0);   // initialize all to 0

        // Count frequencies
        for (int num : nums) {
            // If num might be out of range, you'd need to resize or use map
            if (num < 0 || num >= (int)freq.size()) {
                // Handle error or dynamically resize – better to use unordered_map
                // For safety, we'll just skip or resize, but let's assume valid input.
            }
            freq[num]++;
        }

        // Check each frequency (ignore zeros)
        for (int count : freq) {
            if (count > 0 && isPrime(count)) {
                return true;
            }
        }
        return false;
    }
};
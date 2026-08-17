class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ans;
        
        
        for(char c : s){
            if(isalnum(c)){ 
                ans.push_back(tolower(c)); 
            }
        }
        
        int n = ans.size();
        
        
        for(int i = 0; i < n / 2; i++){
            
            if(ans[i] != ans[(n - 1) - i]) {
                return false;
            }
        }
        
        return true; 
    }
};
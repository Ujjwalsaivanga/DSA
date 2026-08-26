class Solution {
public:
    int kthFactor(int n, int k) {
        int i=1;
        vector<int>factor;
        while(i<=n){
            if(n%i==0){
                factor.push_back(i);
            }
            i++;
        }
        
        if(k>factor.size()){
            return -1;

        }else
        return factor[k-1];
    }
};
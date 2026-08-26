class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>s(101);
        vector<int>ans;
        
        for(int i=0;i<bulbs.size();i++){
            if(s[bulbs[i]]==0){
                s[bulbs[i]]=1;
            }else{
                s[bulbs[i]]=0;
            }
        }
        for(int i=0;i<101;i++){
            if(s[i]==1){
                ans.push_back(i);
            }
        }
return ans;
    }
};
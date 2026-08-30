class Solution {
public:
    int countOdds(int low, int high) {
        int i=low;
        int count=0;
        while( i<=high){
            if(i%2!=0){
            count++;}
            i++;
        }
        return count;
        
    }
};
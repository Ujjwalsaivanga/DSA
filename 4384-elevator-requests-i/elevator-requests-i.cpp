class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int time=0;
        int floor=0;
        for(int i=0;i<requests.size();i++){
            if(floor!=requests[i]){


        time+=abs(floor-requests[i]);
                floor=requests[i];
                
            }

        }
        return time;
    }
};
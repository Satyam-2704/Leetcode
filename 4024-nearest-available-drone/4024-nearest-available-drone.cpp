class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minimum=INT_MAX;
        int index=-1;
        for(int i=0;i<drones.size();i++){
            int x=drones[i][0];
            int y=drones[i][1];
            int r=drones[i][2];
            int d=abs(x-target[0]) + abs(y-target[1]);
            if(r>=d){
                if(d<minimum || (d==minimum && i<index)){
                    minimum=d;
                    index=i;
                }
            }
        }
        return index;
    }
};
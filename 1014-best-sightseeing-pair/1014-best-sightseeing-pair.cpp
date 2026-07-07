class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxTillnow=values[0]+0;
        int maxScore=0;
        for(int j=1;j<values.size();j++){
            int maxRight=values[j]-j;
            maxScore=max(maxScore,maxTillnow + maxRight);
            maxTillnow=max(maxTillnow,values[j]+j);
        }
        return maxScore;
    }
};
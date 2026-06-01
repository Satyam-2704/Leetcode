class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
        maxsum=windowsum;
        for(int i=k;i<nums.size();i++){
            windowsum=windowsum+nums[i] - nums[i-k];
            maxsum=max(windowsum,maxsum);
    }
    double avg=(double)maxsum/k;
    return avg;
    }
};
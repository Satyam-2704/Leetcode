class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int total=0;
         int result=INT_MAX;
        for(int r=0;r<nums.size();r++){
            total+=nums[r];
            while(total>=target){
              result=min(r-l+1,result);
            total-=nums[l];
            l++;
            }
        }
        if(result==INT_MAX){
            return 0;
        }
        return result;
    }
};
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==nums[n/2]){
                count++;
            }
        }
        return (count==1);
    }
};
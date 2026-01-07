class Solution {
public:
    bool isPossible(vector<int>& nums,int k,int maxsum){
        int parts=1;
        int currentsum=0;
        for(int i=0;i<nums.size();i++){
            if(currentsum + nums[i] >maxsum){
                parts++;
                currentsum=nums[i];
            }
            else{
                currentsum+=nums[i];
            }

        }
        return parts <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low= *max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=high;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(isPossible(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
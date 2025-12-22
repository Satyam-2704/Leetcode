class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int index=-1;
        while(low<=high){
            int mid=low+ (high-low)/2;
            if(nums[mid]==target){
                index=mid;
                break;
            }
            else if(nums[mid]<target){
                    low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
            if(index!=-1)
                return index;
            
            else 
                return low;
            
            
    }
    
};
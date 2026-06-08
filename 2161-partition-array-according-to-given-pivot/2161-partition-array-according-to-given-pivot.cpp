class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;
        vector<int> mid;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                right.push_back(nums[i]);
            }
            else if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                mid.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i:left){
            ans.push_back(i);
        }
        for(int j:mid){
            ans.push_back(j);
        }
        for(int k:right){
            ans.push_back(k);
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1={nums[0]};
        vector<int> arr2={nums[1]};
        int n=nums.size();
        for(int i=2;i<n;i++){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        vector<int> result;
        for(int x:arr1){
            result.push_back(x);
        }
        for(int y:arr2){
            result.push_back(y);
        }
        return result;
    }
};
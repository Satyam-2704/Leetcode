class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        int index2=-1;
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                    index2=mp[target-nums[i]];
                    return{index2 +1,i+1};
            }
            else{
            mp[nums[i]]=i;
            }
        }
        return {};
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i:nums){
            mp[i]++;
        }
        for(auto p:mp){
            if(p.second>(n/2)){
                return p.first;
            }
        }
        return 0;
    }
};
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int sum=0;
        for(auto p:mp){
            if(p.second == 1){
                sum+=p.first;
            }
        }
        return sum;
    }
};
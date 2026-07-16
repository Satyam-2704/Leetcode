class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> ans;
        int pairs=0;
        int rem=0;
        for(auto it:mp){
            if(it.second %2==0){
                pairs+=it.second/2;
            }
            else if(it.second %2 != 0){
                rem++;
                pairs+=it.second/2;
            }
        }
        return {pairs,rem};
    }
};
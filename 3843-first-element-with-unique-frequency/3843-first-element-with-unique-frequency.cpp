class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_map<int,int> unique;
        for(int i:nums){
            freq[i]++;
        }
        for(auto p:freq){
            unique[p.second]++;
        }
        for(int x:nums){
            if(unique[freq[x]] == 1){
                return x;
            }
        }
        return -1;
    }
};
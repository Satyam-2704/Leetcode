class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> freq;
        int ans=-1;
        for(int i:arr){
            freq[i]++;
        }
        for(auto p:freq){
            if(p.second==p.first){
                ans=max(ans,p.first);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
            unordered_map<int,int> mp;
            int count=0;
            for(int x:nums){
                mp[x]++;
            }
            for(auto &p :mp){
                int a=p.first;
                int c=p.second;
            if(k==0){
                if(c>1){
                    count++;
                }
            }
            else{
                if(mp.count(a+k)){
                    count++;
                }
            }
            }
            return count;
    }
};
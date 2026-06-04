class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(char ch:magazine){
            mp[ch]++;
        }
        for(char c:ransomNote){
            mp[c]--;
            if(mp[c]<0){
                return false;
            }
        }
        return true;
    }
};
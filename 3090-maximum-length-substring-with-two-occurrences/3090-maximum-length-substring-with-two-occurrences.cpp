class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mp;
        int l=0;
        int length=0;
        for(int r=0;r<s.size();r++){
                mp[s[r]]++;
                while(mp[s[r]]>2){
                    mp[s[l]]--;
                    l++;
                }
                length=max(length,r-l+1);
        }
        return length;
     }
};
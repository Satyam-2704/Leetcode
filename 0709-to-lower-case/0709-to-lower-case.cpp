class Solution {
public:
    string toLowerCase(string s) {
        string low;
        for(int i=0;i<s.length();i++){
            low+=tolower(s[i]);
        }
        return low;
    }
};
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st={'a','e','i','o','u','A','E','I','O','U'};
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(!st.count(s[l]) && l<r){
                l++;
            }
            else if(!st.count(s[r]) && l<r){
                r--;
            }
            if(st.count(s[l]) && st.count(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};
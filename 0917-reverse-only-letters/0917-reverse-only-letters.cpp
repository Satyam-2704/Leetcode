class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> letter;
        string ans;
        for(char ch:s){
            if(isalpha(ch)){
                letter.push(ch);
            }
        }
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                ans+=letter.top();
                letter.pop();
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};
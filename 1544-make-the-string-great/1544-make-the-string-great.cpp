class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string res="";
        for(char ch:s){
            if(!st.empty() && abs(ch-st.top())==32){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        while(!st.empty()){
            res=st.top()+ res;
            st.pop();
        }
        return res;
    }
};
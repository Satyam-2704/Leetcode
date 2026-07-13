class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        unordered_set<char> st;
        for(char ch:jewels){
            st.insert(ch);
        }
        for(char ch:stones){
            if(st.count(ch)){
                c++;
            }
        }
        return c;
    }
};
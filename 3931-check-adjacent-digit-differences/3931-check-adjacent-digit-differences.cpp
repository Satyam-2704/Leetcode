class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=0;i<s.size()-1;i++){
            int first=s[i]-'0';
            int second=s[i+1]-'0';
            if(abs(first-second)>2){
                return false;
            }
        }
        return true;
    }
};
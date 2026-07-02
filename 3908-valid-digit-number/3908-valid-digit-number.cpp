class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        string a=to_string(x);
        if(s[0]==a[0]){
            return false;
        }
        else{
            if(s.find(a)!=string::npos){
                return true;
            }
        }
        return false;
    }
};
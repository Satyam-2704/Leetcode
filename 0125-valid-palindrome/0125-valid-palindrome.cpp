class Solution {
public:
    bool isPalindrome(string s) {
            string f;
            for(char c:s){
                if(isalnum(c)){
                char low=tolower(c);
                f+=low;
                }
            }
            string temp=f;
            reverse(f.begin(),f.end());
            if(f==temp){
                return true;
            }
            return false;
    }

    
};
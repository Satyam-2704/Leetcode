class Solution {
public:
    int passwordStrength(string password) {
        int sum=0;
        unordered_map<char,int> map;
        string ans="";
        for (char ch:password){
            map[ch]++;
        }
        for(auto p:map){
            if(p.second>0){
                ans+=p.first;
            }
        }
        for (char ch:ans){
            if(ch>='a' && ch<='z')
                sum+=1;
            else if(ch>='A' && ch<='Z')
                sum+=2;
            else if(ch>='0' && ch<='9')
                sum+=3;
            else if(ch=='!'||ch=='@'||ch=='#'||ch=='$')
                sum+=5;
        }
        return sum;
    }
};
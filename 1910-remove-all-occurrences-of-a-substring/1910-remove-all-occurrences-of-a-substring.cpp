class Solution {
public:
    string removeOccurrences(string s, string part) {
        int len=part.length();
    while(s.length()!=0){
    int index =s.find(part);
    if(index==-1){
        break;
    }
    s.erase(index,len);
    }
    return s;
    }
};
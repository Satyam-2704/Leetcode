class Solution {
public:
    bool isValid(string word) {
            if(word.size()<3){
                return false;
            };
            int vowelcount=0;
            int consonant=0;

            for(char ch:word){
                if(ch=='@' || ch=='#' || ch=='$'){
                    return false;
                }
                if(isalpha(ch)){
                if(tolower(ch)=='a'||tolower(ch)=='e'||tolower(ch)=='i'||tolower(ch)=='o'||tolower(ch)=='u'){
                        vowelcount++;
                }
                else{
                    consonant++;
                }
                }
            }
            if(vowelcount <1 || consonant<1){
                return false;
            }
        return true;
    }
};
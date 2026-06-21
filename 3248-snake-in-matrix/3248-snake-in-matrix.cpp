class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
           int position=0;
            for(string st:commands){
                if(st=="RIGHT"){
                    position+=1;
                }
                if(st=="LEFT"){
                    position-=1;
                }
                if(st=="DOWN"){
                    position+=n;
                }
                if(st=="UP"){
                    position-=n;
                }
            }
            return position;
    }
};
int squaresum(int n){
    int digit=0;
        int sum=0;
        int temp=n;
        while (n>0){
            digit=n%10;
            n=n/10;
            sum=sum+(digit*digit);
        }
        return sum;
        }
class Solution {
public:
    bool isHappy(int n) {
        
        
        while(n!=1 && n!=4){
            n=squaresum(n);
        }
        if (n==1){
            return true;
    }
    else{
        return false;
    }
    }
};
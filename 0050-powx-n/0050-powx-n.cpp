class Solution {
public:
    double myPow(double x, int n) {
       double res=1.0;
       long long exp=n;
       if(exp<0){
        x=1.0/x;
        exp=-exp;
       }
        while(exp>0){
            if(exp&1){
                res=1LL*(res*x);
            }
            x=1LL*(x*x);
            exp=exp>>1;
        }
        return res;
    }
};
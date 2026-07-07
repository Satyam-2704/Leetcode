class Solution {
public:
    long long sumAndMultiply(int n) {
        long long divisor=1;
        long long ans=0;
        long long sum=0;
        while(divisor*10<=n){
            divisor *=10;
        }
        while(divisor>0){
            long long digit=n/divisor;
            if(digit!=0){
                ans=ans*10 +digit;
                sum+=digit;
            }
            n=n%divisor;
            divisor/=10;
        }
        return (int) ans*sum;
    }
};
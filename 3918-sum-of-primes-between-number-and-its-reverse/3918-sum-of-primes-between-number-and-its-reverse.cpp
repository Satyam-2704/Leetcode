class Solution {
public:
    bool isprime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int l=n;
        int sum=0;
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int r=stoi(s);
        if(r<l){
            swap(l,r);
        }
        for(int i=l;i<=r;i++){
            if(isprime(i)){
                sum+=i;
            }
        }
        return sum;
    }
};
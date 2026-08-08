class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=INT_MAX;
        for(int i:prices){
            if(minprice>i){
                minprice=i;
            }else{
            int profit=(i-minprice);
            maxprofit=max(maxprofit,profit);
            }
        }
        return maxprofit;
    }
};
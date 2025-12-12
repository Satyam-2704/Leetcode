class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n;
        int maxwealth=0;

        n=accounts.size();
        for (int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];

                if(sum>maxwealth){
                    maxwealth=sum;

                }

            }
        }
        return maxwealth;
    }

};
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int check=1;
        int n=arr.size();
        int i=0;
        while(i<n && k>0){
            if(arr[i]==check){
                i++;
            }
            else{
                k--;
            }
            check++;
        }
        while(k--){
            check++;
        }
        return check-1;
    }
};
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> st;
        for(long long i:nums){
            long long curr=i;
            while(!st.empty() && st.top()==curr){
                    long long top=st.top();
                    st.pop();
                    curr=top*2;
            }
            st.push(curr);
        }
        vector<long long > ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
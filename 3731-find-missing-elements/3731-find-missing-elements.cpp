class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=nums[0];
        int end=nums[n-1];
        set<int> st;
        vector<int> ans;
        for(int i:nums){
            st.insert(i);
        }
        for(int i=start;i<end;i++){
            if(!st.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        for(int i:nums1){
            st1.insert(i);
        }
        for(int j:nums2){
            if(st1.count(j)==1){
                st2.insert(j);
            }

        }
        vector<int> res(st2.begin(),st2.end());
        return res;
    }
};
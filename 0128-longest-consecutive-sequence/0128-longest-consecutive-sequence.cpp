class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        if(st.empty()){
            return 0;
        }
        int count=0;
        int maxcount=0;
        vector<int> ascend;
        for(int x:st){
            ascend.push_back(x);
        }
        for(int i=0;i<ascend.size()-1;i++){
            if(ascend[i+1]-ascend[i] == 1){
                count++;
            }
            else{
                count=0;
            }
            maxcount=max(count,maxcount);
        }
        return maxcount+1;
    }
};
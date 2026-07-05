class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        int count=0;
        int ans=0;
        for(int i:nums){
            pq.push(i);
        }
        while(!pq.empty()){
                if(count==k-1){
                    ans=pq.top();
                }
            pq.pop();
            count++;
        }
        return ans;  
    }
};
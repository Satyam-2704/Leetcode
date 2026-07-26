class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long mx=1LL*nums[n-1]* nums[n-2]*100000LL;
        mx=max(mx,nums[0]*-100000LL * nums[n-1]);
        mx=max(mx,1LL*nums[0]* 1LL*nums[1]*100000LL);
        return mx;
    }
};
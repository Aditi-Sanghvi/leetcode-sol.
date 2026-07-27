class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()==2) return (nums[n-1]-1)*(nums[n-2]-1);
        int prod=(nums[n-1]-1)*(nums[n-2]-1);
        return prod;
    }
};
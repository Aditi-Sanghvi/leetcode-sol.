class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int left=0;
        int right=1;
        int count=0;
        if(k<0) return 0;
        sort(nums.begin(), nums.end());
        while(right<nums.size()){
             if(left==right){
                right++; 
                continue;
             }
            if(nums[right]-nums[left]==k){
               count++; 
               left++; 
               right++;
               
                while(left<nums.size() && nums[left]==nums[left-1]){
                    left++;
                    }
                    
                while(right<nums.size() && nums[right]==nums[right-1]){
                    right++;
                }
            } 
            else if(nums[right]-nums[left]<k){
                 right++;
             }
             else{
                left++;
             }
        }
        return count;
    }
};
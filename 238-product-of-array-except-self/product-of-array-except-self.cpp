class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        for(int l=1;l<nums.size();l++){
            result[l]=result[l-1]*nums[l-1];
        }

        int rightProd=1;
        for(int r=nums.size()-1;r>=0;r--){
            result[r]=result[r]*rightProd;
            rightProd*=nums[r];
        }
        return result;
    }
};
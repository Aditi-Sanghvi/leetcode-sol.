class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int PrefSum=0;

        unordered_map<int,int> mp;
        mp[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            PrefSum+=nums[i];

            if(mp.find(PrefSum-k)!=mp.end()){
                count+=mp[PrefSum-k];
            }
            mp[PrefSum]++;
        }
        return count;
    }
};
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>f;
        long long ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            f[i-nums[i]]++;
            ans+=max(0,f[i-nums[i]]);
        }
        return (long long)n*(n+1)/2-ans;
        
    }
};
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mn=min(mn,sum);
            mx=max(mx,sum);
            sum+=nums[i];
        }
            mn=min(mn,sum);
            mx=max(mx,sum);
        return mx-mn;
    }
};
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j=0,n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(k)k--;
                else {
                    while(j<n&&j<=i&&nums[j]!=0)j++;
                    j++;
                }
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};
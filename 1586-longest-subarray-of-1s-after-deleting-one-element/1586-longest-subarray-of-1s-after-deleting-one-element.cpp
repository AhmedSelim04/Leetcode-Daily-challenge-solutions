class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool ex=false;
        int j=0,n=nums.size(),ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                if(!ex)ex=true;
                else {
                    while(j<n&&nums[j]!=0)j++;
                    j++;
                }
            }
            ans=max(ans,i-j);
        }
        return ans;
    }
};
class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int n=nums.size(),s=0,e=0,ans=-1;
        for(int i=0;i<n;i++)e=max(e,nums[i]);
        while(s<=e){
            int mid=(s+e)/2,cnt=0;
            for(int i=0;i<n;i++){
                if(nums[i]<=mid){
                    cnt++;
                    i++;
                }
            }
            if(cnt>=k){
                e=mid-1;
                ans=mid;
            }
            else s=mid+1;
        }
        return ans;
    }
};
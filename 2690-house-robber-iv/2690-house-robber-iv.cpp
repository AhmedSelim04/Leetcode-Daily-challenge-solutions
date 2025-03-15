class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int n=nums.size(),s=0,e=*max_element(nums.begin(),nums.end()),ans=-1;
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
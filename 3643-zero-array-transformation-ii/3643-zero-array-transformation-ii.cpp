class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries){
        int idx=-1,n=nums.size(),q=queries.size();
        int s=0,e=q-1,mid=(s+e)/2,ans=-1;
        vector<int>pre(n+1,0);
        while(s<=e){
            mid=(s+e)/2;
            for(int i=0;i<n;i++)pre[i]=0;
            for(int i=0;i<=mid;i++){
                pre[queries[i][0]]+=queries[i][2];
                pre[queries[i][1]+1]-=queries[i][2];
            }
            bool is=true;
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=pre[i];
                if(sum<nums[i])is=false;
            }
            if(is){
                e=mid-1;
                ans=mid;
                }
            else 
                s=mid+1;
        }
        if(ans==0){
            bool is=true;
            for(int i=0;i<n;i++){
                if(nums[i]!=0)is=false;
            }
            if(is)return 0;
        }
        return ans!=-1?ans+1:-1;
    }
};
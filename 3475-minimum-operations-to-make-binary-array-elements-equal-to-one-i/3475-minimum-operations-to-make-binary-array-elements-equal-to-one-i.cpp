class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0,ans=0;
        for(int i=0;i<2;i++)cnt+=nums[i]==0;
        for(int i=2;i<nums.size();i++){
            cnt+=nums[i]==0;
            if(cnt){
                if(nums[i-2]==0){
                    nums[i-2]=1-nums[i-2];
                    nums[i-1]=1-nums[i-1];
                    nums[i]=1-nums[i];
                    cnt=3-cnt;
                    ans++;
                }
            }
            cnt-=nums[i-2]==0;
        }
        for(int i=0;i<nums.size();i++)if(nums[i]==0)return -1;
        return ans;
    }
};
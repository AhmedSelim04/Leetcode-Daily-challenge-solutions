class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,priority_queue<int>>f;
        for(int i=0;i<nums.size();i++){
            int s=0,x=nums[i];
            while(x){
                s+=x%10;
                x/=10;
            }
            f[s].push(nums[i]);
        }
        int ans=-1;
        for(auto i:f){
            if(i.second.size()>1){
                int x=i.second.top();
                i.second.pop();
                ans=max(ans,i.second.top()+x);
            }
        }
        return ans;
    }
};
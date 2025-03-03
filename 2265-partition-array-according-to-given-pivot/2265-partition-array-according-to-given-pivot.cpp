class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size(),idx=0,cnt=0;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]<pivot)ans[idx++]=nums[i];
            if(nums[i]==pivot)cnt++;
        }
        while(cnt--)ans[idx++]=pivot;
        for(int i=0;i<n;i++){
            if(nums[i]>pivot)ans[idx++]=nums[i];
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
          int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[x++]=nums[i];
            }
        }
        while(x<n)nums[x++]=0;
        return nums;
    }
};
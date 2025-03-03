class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        queue<int>q0,q1,q2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<pivot)q0.push(nums[i]);
            else if(nums[i]>pivot)q2.push(nums[i]);
            else q1.push(nums[i]);
        }
        nums.clear();
        while(!q0.empty())nums.push_back(q0.front()),q0.pop();
        while(!q1.empty())nums.push_back(q1.front()),q1.pop();
        while(!q2.empty())nums.push_back(q2.front()),q2.pop();
        return nums;
    }
};
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p=0,n=0;
        for(auto i:nums){
            p+=i>0;
            n+=i<0;
        }
        return max(p,n);
    }
};
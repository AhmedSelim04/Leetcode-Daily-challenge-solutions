class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int>f(501,0);
        for(auto i:nums)f[i]++;
        for(auto i:nums)if(f[i]&1)return false;
        return true;
    }
};
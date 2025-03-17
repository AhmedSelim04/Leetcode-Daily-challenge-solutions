class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>f;
        for(auto i:nums)f[i]++;
        for(auto i:nums)if(f[i]&1)return false;
        return true;
    }
};
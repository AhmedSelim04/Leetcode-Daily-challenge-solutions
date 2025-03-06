class Solution {
public:
int n;
vector<int>dp,c;
int rec(int i){
    if(i>=n)return 0;
    if(~dp[i])return dp[i];
    return dp[i]=max(rec(i+1),rec(i+2)+c[i]);
}
    int rob(vector<int>& nums) {
        n=nums.size();
        c=nums;
        dp=vector<int>(n+5,-1);
        return rec(0);
    }
};
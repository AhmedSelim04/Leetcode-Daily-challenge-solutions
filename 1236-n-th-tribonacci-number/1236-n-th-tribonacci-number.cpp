class Solution {
public:
int rec(int n,vector<int>&dp){
    if(n==0||n==1)return n;
    if(n==2)return 1;
    cout<<dp[n]<<' ';
    if(dp[n]!=-1)return dp[n];
    return dp[n]=rec(n-1,dp)+rec(n-2,dp)+rec(n-3,dp);
}
    int tribonacci(int n) {
        vector<int>dp(50,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        return rec(n,dp);
    }
};
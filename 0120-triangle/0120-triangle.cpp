class Solution {
public:
int n;
int dp[201][201];
vector<vector<int>>x;
int rec(int i,int j){
    if(i==n){
        return 0;
    }
    if(~dp[i][j])return dp[i][j];
    if(j>=x[i].size()||j<0)return 1e8;
    
    return dp[i][j]=min(rec(i+1,j)+x[i][j],rec(i+1,j+1)+x[i][j]);
}
    int minimumTotal(vector<vector<int>>& triangle) {
        n=triangle.size();
        x=triangle;
        memset(dp,-1,sizeof(dp));
        return rec(0,0);
    }
};
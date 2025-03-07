class Solution {
public:
int n,m;
vector<vector<int>>dp,g;
int rec(int i,int j){
    if(i==n-1&&j==m-1){
        return g[i][j];
    }
    if(i==n||j==m)return 1e5;
    if(~dp[i][j])return dp[i][j];
    return dp[i][j]=min(rec(i+1,j)+g[i][j],rec(i,j+1)+g[i][j]);
}
    int minPathSum(vector<vector<int>>& grid) {
        n=grid.size(),m=grid.front().size();
        g=grid;
        dp=vector<vector<int>>(n,vector<int>(m,-1));
        return rec(0,0);
    }
};
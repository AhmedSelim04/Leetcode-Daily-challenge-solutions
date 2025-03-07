class Solution {
public:
int n;
vector<vector<int>>dp;
vector<int>o;
int rec(int i,int p){
    if(i==n){
        return 0;
    }
    if(o[i]==p||p>3||p<1)return 1e6;
    if(~dp[i][p])return dp[i][p];
    int mn=INT_MAX;
    if(o[i]!=p)mn=min(mn,rec(i+1,p));
    if(o[i]!=p+1)mn=min(mn,rec(i+1,p+1)+1);
    if(o[i]!=p+2)mn=min(mn,rec(i+1,p+2)+1);
    if(o[i]!=p-1)mn=min(mn,rec(i+1,p-1)+1);
    if(o[i]!=p-2)mn=min(mn,rec(i+1,p-2)+1);
    return dp[i][p]=mn;
}
    int minSideJumps(vector<int>& obstacles) {
        n=obstacles.size();
        dp=vector<vector<int>>(n,vector<int>(4,-1));
        o=obstacles;
        return rec(0,2);
    }
};
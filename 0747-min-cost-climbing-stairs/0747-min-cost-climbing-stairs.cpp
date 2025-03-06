class Solution {
public:
int n;
vector<int>dp,c;
int mn(int i){
    if(i>n){
        return 0;
    }
    if(~dp[i])return dp[i]; 
    return dp[i]=min(mn(i+1)+c[i],mn(i+2)+c[i]);
}
    int minCostClimbingStairs(vector<int>& cost) {
        n=cost.size();
        dp=vector<int>(n+5,-1);
        cost.push_back(0);
        for(int i=n-1;i>=0;i--)cost[i+1]=cost[i];
        cost[0]=0;
        c=cost;
        return mn(0);
    }
};
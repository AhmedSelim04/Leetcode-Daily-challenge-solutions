class Solution {
    private:
    vector<int>dp;
    int rec(int sum,vector<int>&coins){
        if(sum==0)return 0;
        if(sum<0)return 1e9;
        if(~dp[sum])return dp[sum];
        int mn=INT_MAX;
        for(int i=0;i<coins.size();i++){
            mn=min(mn,rec(sum-coins[i],coins)+1);
        }
        return dp[sum]=mn;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        dp=vector<int>(amount+5,-1);
        int x=rec(amount,coins);
        if(x>1e4)return -1;
        return x;
    }
};
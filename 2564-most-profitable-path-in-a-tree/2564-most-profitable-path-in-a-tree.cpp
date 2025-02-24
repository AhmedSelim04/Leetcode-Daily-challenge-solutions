class Solution {
public:

    unordered_map<int,vector<int>>adj;
    int ans=INT_MIN;
    vector<int>b;
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n=edges.size();
        for(int i=0;i<n;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>v(n+1,n+1);
        bob_dfs(bob,-1,v);
        b=v;
        dfs(0,-1,amount[0],amount);
        return ans;
    }
    void dfs(int n,int p,int sum,vector<int>&a,int cnt=1){
        bool s=false;
        for(auto i:adj[n]){
            if(i!=p){
                s=true;
                if(b[i]==cnt)
                dfs(i,n,sum+a[i]/2,a,cnt+1);
                else if(b[i]<cnt)dfs(i,n,sum,a,cnt+1);
                else dfs(i,n,sum+a[i],a,cnt+1);
                
            }
        }
        if(!s){
            ans=max(ans,sum);
        }
    }
    bool is=false;
    void bob_dfs(int n,int p,vector<int>&b_s,int cnt=0){
        if(n==0){
            b_s[0]=cnt;
            is=true;
            return ;
        }
        for(auto i:adj[n]){
            if(i!=p&&!is){
                bob_dfs(i,n,b_s,cnt+1);
            }
        }
        
            if(is){
                b_s[n]=cnt;
            }

    }
};
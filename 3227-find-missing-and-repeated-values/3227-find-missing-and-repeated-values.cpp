class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
        int n=grid.size();
        vector<int>f(n*n+1,0);
        int a=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(f[grid[i][j]]==1)
                    a=grid[i][j];
                f[grid[i][j]]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(!f[i]){
                return {a,i};
            }
        }
        return {-1,-1};
    }
};
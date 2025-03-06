class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
        int n=grid.size();
        vector<int>f(n*n+1,0);
        long long sum=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!f[grid[i][j]]){
                    f[grid[i][j]]++;
                    sum+=grid[i][j];
                }
                else ans.push_back(grid[i][j]);
            }
        }
        n*=n;
        ans.push_back(n*(n+1)/2-sum);
        return ans;
    }
};
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>f;
        int n=grid.size();
        for(int i=0;i<n;i++){
            f[grid[i]]++;
        }
        int ans=0;
        for(int j=0;j<n;j++){
            vector<int>v;
            for(int i=0;i<n;i++){
                v.push_back(grid[i][j]);
            }
            ans+=f[v];
        }
        return ans;
    }
};
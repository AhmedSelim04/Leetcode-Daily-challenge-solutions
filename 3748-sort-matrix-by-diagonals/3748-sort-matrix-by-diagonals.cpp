class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int x=grid.size()-1,y=0;
        while(x>=0){
            vector<int>a;
            int i=x,j=y;
            while(i<grid.size()&&j<grid.size()){
                a.push_back(grid[i][j]);
                i++;j++;
            }
            sort(a.begin(),a.end());
            i=x,j=y;
            while(i<grid.size()&&j<grid.size()){
                grid[i][j]=a.back();
                a.pop_back();
                i++;j++;
            }
            x--;
        }
        x++;
        y++;
        // cout<<x<<' '<<y<<endl;
        while(y<grid.size()){
            vector<int>a;
            int i=x,j=y;
            while(i<grid.size()&&j<grid.size()){
                a.push_back(grid[i][j]);
                i++;j++;
            }
            sort(a.rbegin(),a.rend());
            i=x,j=y;
            while(i<grid.size()&&j<grid.size()){
                grid[i][j]=a.back();
                a.pop_back();
                i++;j++;
            }
            y++;
        }
        return grid;
    }
};
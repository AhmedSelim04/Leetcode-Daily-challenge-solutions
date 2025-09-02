class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int ans=0;
        for(int i=0;i<points.size();i++){
            for(int j=0;j<points.size();j++){
                if(i==j)continue;
                if(points[i][0]>=points[j][0]&&points[i][1]<=points[j][1]){
                // cout<<points[i][0]<<' '<<points[i][1]<<' '<<points[j][0]<<' '<<points[j][1]<<'\n';
                    int x1=min(points[i][0],points[j][0]),x2=max(points[i][0],points[j][0]);               
                    int y1=min(points[i][1],points[j][1]),y2=max(points[i][1],points[j][1]);
                    bool is=true;
                    for(int k=0;k<points.size();k++){
                        if(k==i||k==j)continue;
                        // cout<<k<<endl;
                        if((points[k][0]>=x1&&points[k][0]<=x2&&points[k][1]>=y1&&points[k][1]<=y2))is=false;
                    }
                    if(is)ans++;
                }
            }
        }
        return ans;
    }
};
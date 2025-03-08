class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mn=INT_MAX;
        for(int i=0;i<blocks.size()-k+1;i++){
            int ans=0;
            for(int j=0;j<k;j++){
                if((i+j)<blocks.size()){
                    ans+=blocks[i+j]=='B';
                }
            }
            mn=min(mn,k-ans);
        }
        return mn;
    }
};
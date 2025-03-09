class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int cnt=1,ans=0,n=colors.size();
        for(int i=0;i<n+k-2;i++){
            if(colors[(i)%n]!=colors[(i+1)%n]){
                cnt++;
            }
            else {
                cnt=1;
            }
            ans+=cnt>=k;
        }
        return ans;
    }
};
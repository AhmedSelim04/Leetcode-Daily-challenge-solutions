class Solution {
public:
    long long coloredCells(int n) {
        long long ans=1;
        for(long long i=2;i<=n;i++){
            ans+=(i-1)*4LL;
        }
        return ans;
    }
};
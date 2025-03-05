class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n;
        return ans*(ans-1)*2LL+1;
    }
};
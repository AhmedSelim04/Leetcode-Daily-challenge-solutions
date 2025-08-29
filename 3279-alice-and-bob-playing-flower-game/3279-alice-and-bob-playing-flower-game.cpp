class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans=0;
        for(int i=1;i<=n;i++){
            if(i%2){
                ans+=(m/2);
            }else {
                ans+=((m+1)/2);    
            }
        }
        return ans;
    }
};
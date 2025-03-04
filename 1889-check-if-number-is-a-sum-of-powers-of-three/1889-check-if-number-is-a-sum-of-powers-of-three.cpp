class Solution {
public:
    bool checkPowersOfThree(int n) {
        for(int i=0;i<(1LL<<16);i++){
            int msk=i,j=0,sum=0;
            while(msk){
                if(msk&1){
                    sum+=pow(3,j);
                }
                j++;
                msk>>=1;
            }
            if(sum==n)return true;
        }
        return false;
    }
};
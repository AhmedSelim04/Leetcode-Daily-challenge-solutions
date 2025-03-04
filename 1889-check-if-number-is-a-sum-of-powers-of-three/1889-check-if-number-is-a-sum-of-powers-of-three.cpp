class Solution {
public:
    bool checkPowersOfThree(int n) {
        int i=0;
        while(pow(3,i)<=n)i++;
        while(n){
            if(pow(3,i)<=n)n-=pow(3,i);
            if(pow(3,i)<=n)return false;;
            i--;
        }
        return true;
    }
};
class Solution {
    private:vector<int>p,pr;
public:
void d(int right){
    p[0]=0;
    p[1]=0;
    for(int i=2;i<=right;i++){
        if(p[i]){
            pr.push_back(i);
            for(int j=i*2;j<=right;j+=i){
                p[j]=0;
            }
        }
    }
}
    vector<int> closestPrimes(int left, int right) {
        if(right==1)return {-1,-1};
        p=vector<int>(right+8,1);
        d(right);
        int idx=INT_MAX;
        for(int i=0;i<pr.size();i++)
        if(pr[i]>=left){
            idx=i;
            break;
        }
        int mn=INT_MAX,i1=-1,i2=-1;
        for(int i=idx;i<pr.size()-1;i++){
            if(pr[i+1]-pr[i]<mn){
                mn=pr[i+1]-pr[i];
                i1=pr[i],i2=pr[i+1];
            }
        }
        return {i1,i2};
    }
};
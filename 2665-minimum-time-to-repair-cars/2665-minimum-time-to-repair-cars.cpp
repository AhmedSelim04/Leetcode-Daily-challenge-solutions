class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long s=0,e=1e18,ans=-1;
        while(s<=e){
            long long mid=(s+e)/2;
            long long sum=0;
            for(auto i:ranks){
                sum+=sqrt(mid/i);
            }
            if(sum>=cars){
                e=mid-1;
                ans=mid;
            }
            else s=mid+1;
        }
        return ans;
    }
};
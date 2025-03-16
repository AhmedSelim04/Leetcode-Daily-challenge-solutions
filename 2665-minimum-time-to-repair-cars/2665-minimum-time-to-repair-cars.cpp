class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long s=0,e=pow(cars,2)*(*max_element(ranks.begin(),ranks.end())),ans=-1,sum=0;
        while(s<=e){
            long long mid=(s+e)/2;
            for(auto i:ranks){
                sum+=sqrt(mid/i);
            }
            if(sum>=cars){
                e=mid-1;
                ans=mid;
            }
            else s=mid+1;
            sum=0;
        }
        return ans;
    }
};
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum=0;
        for(auto i:candies)sum+=i;
        if(sum<k)return 0;
        sort(candies.begin(),candies.end());
        int s=1,e=1e9,ans=-1;
        while(s<=e){
            long long mid=(s+e)/2,cnt=0;
            for(auto i:candies){
                cnt+=i/mid;
            }
            if(cnt>=k){
                s=mid+1;
                ans=mid;
            }
            else e=mid-1;
        }
        return ans;
    }
};
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        vector<int>x(32,0);
        int n=nums.size(),idx=0,ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                x[j]+=(nums[i]>>j)&1;
            }
            bool is=true;
            for(int j=0;j<32;j++){
                if(x[j]>1){
                    is=false;
                    break;
                }
            }
            while(!is&&idx<=i){
                for(int j=0;j<32;j++){
                    x[j]-=(nums[idx]>>j)&1;
                }
                idx++;
                bool b=true;
                for(int j=0;j<32;j++){
                    if(x[j]>1)b=false;
                }
                if(b)is=true;
            }
            ans=max(ans,i-idx+1);
        }
        return ans;
    }
};
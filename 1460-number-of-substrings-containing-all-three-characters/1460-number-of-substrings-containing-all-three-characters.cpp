class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>f(3,0);
        int ans=0,n=s.size(),l=0,r=0;
        while(r<n){
            f[s[r]-'a']++;
            while(f[0]&&f[1]&&f[2]){
                ans+=n-r;
                f[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return ans;
    }
};
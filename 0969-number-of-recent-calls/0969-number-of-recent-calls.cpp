class RecentCounter {
private: vector<int>v;
public:
    RecentCounter() {}
    int ping(int t) {
        int ans=1;
        for(int i=0;i<v.size();i++){
            if(v[i]>=t-3000&&v[i]<=t)ans++;
        }
        v.push_back(t);
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
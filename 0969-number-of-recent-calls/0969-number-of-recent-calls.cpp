class RecentCounter {
private: queue<int>v;
public:
    RecentCounter() {}
    int ping(int t) {
        while(v.size()&&v.front()<t-3000)v.pop();
        v.push(t);
        return v.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
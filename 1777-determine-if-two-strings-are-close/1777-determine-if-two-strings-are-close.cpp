class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())return false;
        vector<int>f1(26,0),f2=f1;
        for(int i=0;i<word1.size();i++){
            f1[word1[i]-'a']++;
        }for(int i=0;i<word2.size();i++){
            f2[word2[i]-'a']++;
        }
        multiset<int>a,b;
        for(int i=0;i<26;i++){
            if(f1[i]&&f2[i]||(!f1[i]&&!f2[i])){
                a.insert(f1[i]);
                b.insert(f2[i]);
            }
            else return false;
        }
        for(auto it1=a.begin(),it2=b.begin();it1!=a.end()&&it2!=b.end();it1++,it2++){
            if(*it1!=*it2)return false;
        }
        return true;
    }
};
class Solution {
public:
bool is_d(char c){
    return c>='0'&&c<='9';
}
bool is_s(char c){
    return c>='a'&&c<='z';
}
bool is_c(char c){
    return c>='A'&&c<='Z';
}
bool is_v(char c){
    c=is_s(c)?c:c+('a'-'A');
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
    bool isValid(string word) {
        if(word.size()<3)return false;
        bool v=false,c=false;
        for(auto &i:word){
            if(!is_d(i)&&!(is_s(i)||is_c(i))){
                return false;
            }
            v=v||is_v(i);
            c=c||!is_v(i)&&!is_d(i);
        }
        return v&&c;
    }
};
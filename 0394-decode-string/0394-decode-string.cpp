class Solution {
public:
bool is_digit(char x)
{
    return x>='0'&&x<='9';
}
    string decodeString(string s) {
        stack<char>x;
        for(int i=0;i<s.size();i++)
        {
            if(is_digit(s[i]))
            x.push(s[i]);
            else if(s[i]!=']')
            {
                x.push(s[i]);
            }
            else if(s[i]==']')
            {
                string a;
                while(!x.empty()&&x.top()!='[')
                {
                    a.push_back(x.top());
                    x.pop();
                }
                x.pop();
                reverse(a.begin(),a.end());
                int t=0,r=0;
                while(!x.empty()&&is_digit(x.top()))
                {
                    r+=(x.top()-'0')*pow(10,t);
                    t++;
                    x.pop();
                }
                while(r--)
                {
                    for(int i=0;i<a.size();i++)
                    x.push(a[i]);
                }
            }
        }
        string ans;
        while(!x.empty())
        {
            ans.push_back(x.top());
            x.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string makeGood(string s)
    {
        stack<char> st;
        string ans="";
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else if (st.top() >= 'a' && st.top() <= 'z' && s[i] >= 'A' && s[i] <= 'Z')
            {
                if (st.top() == s[i] + 'z' - 'Z')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else if (st.top() >= 'A' && st.top() <= 'Z' && s[i] >= 'a' && s[i] <= 'z')
            {
                if (st.top() == s[i] + 'Z' - 'z')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main()
{
    string s;
    cin >> s;
    class Solution ss;
    s=ss.makeGood(s);
    cout<<s;
    return 0;
}
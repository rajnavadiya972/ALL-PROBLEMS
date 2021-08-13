#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, int> m = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
        for (char it : s)
        {
            if (m[it] < 0)
            {
                st.push(it);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                char top = st.top();
                st.pop();
                if (m[top] + m[it] != 0)
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    string s;
    class Solution ans;
    cin >> s;
    cout<<ans.isValid(s)<<endl;
    return 0;
}
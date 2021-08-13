#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> v;
        stack<int> st;
        int count;
        for (auto &it : target)
        {
            st.push(it);
            count = it;
        }
        for (ll i = count; i > 0; i--)
        {
            if (!st.empty() && st.top() == i)
            {
                v.push_back("push");
                st.pop();
            }
            else
            {
                v.push_back("pop");
                v.push_back("push");
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};

int main()
{
    char s[105];
    cin >> s;
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            // int ch = s[i] - '0';
            // int x = atoi(ch);
            v.push_back(s[i] - '0');
        }
    }
    class Solution st;
    vector<string> vn;
    vn=st.buildArray(v, n);
    for (auto &it : vn)
        {
            cout<<it<<" ";
        }
    return 0;
}
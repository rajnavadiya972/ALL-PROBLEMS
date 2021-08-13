#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isValid(string s)
    {
        stack<char> st;
        stack<int> sti;
        map<int,int> m;
        vector<int> maxans;
        int count = 0, i = 0;
        for (char it : s)
        {
            int x = 0;
            if (it == '(')
            {
                st.push(it);
                sti.push(i);
            }
            else
            {
                if (st.empty() && it == ')')
                {
                    st.push(it);
                    sti.push(i);
                    x = 1;
                }
                char topEle = st.top();
                if (topEle != '(' && it == ')' && x == 0)
                {
                    st.push(it);
                    sti.push(i);
                }
                else if (topEle == '(' && it == ')' && x == 0)
                {
                    count += 2;
                    st.pop();
                    sti.pop();
                }
            }
            m.insert({i,count});
            i++;
        }
        int x=0;
        while (!sti.empty())
        {
            int t = sti.top();
            if (t == i - 1)
            {
                st.pop();
                sti.pop();
                i--;
            }
            else
            {
                break;
            }
        }
        while (!sti.empty())
        {
            maxans.push_back(count-m[sti.top()]);
            count=m[sti.top()];
            sti.pop();
            x=1;
        }
        maxans.push_back(count-m[0]);
        if (x==0)
        {
            return count;
        }
        else
        {
            return *(max_element(maxans.begin(),maxans.end()));
        }
    }
};

int main()
{
    string s;
    class Solution ans;
    cin >> s;
    cout << ans.isValid(s) << endl;
    return 0;
}
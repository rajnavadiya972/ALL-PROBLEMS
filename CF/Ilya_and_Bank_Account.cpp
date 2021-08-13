#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s[0] >= '0' && s[0] <= '9')
    {
        cout << s << endl;
    }
    else
    {
        int max = s[1] - '0';
        ll pos = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if ((s[i] == '0' && (i + 1) < s.size()) || (s[i] >= s[i + 1] && (i + 1) < s.size()))
            {
                max = s[i + 1] - '0';
                pos = i + 1;
            }

            if (s[i] - '0' >= max)
            {
                max = s[i] - '0';
                pos = i;
            }
        }
        s.erase(s.begin() + pos);
        if (s.size() == 2 && s[1] == '0')
        {
            cout << "0" << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
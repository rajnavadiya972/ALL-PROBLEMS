#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        map<char, int> m;
        ll count = 0, val_1 = 0;
        string s;
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++)
        {
            m[s[i]]++;
        }
        for (auto &p : m)
        {
            if (p.second >= 2)
            {
                count++;
            }
            if (p.second == 1)
            {
                val_1++;
            }
        }
        cout << count + (val_1 / 2) << endl;
    }

    return 0;
}
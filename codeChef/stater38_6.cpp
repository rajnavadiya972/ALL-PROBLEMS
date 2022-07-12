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
        ll s, x, ans = 0, even = 0, odd = 0;
        cin >> s >> x;
        vector<ll> v;
        for (ll i = 0; i < s; i++)
        {
            ll x1;
            cin >> x1;
            v.push_back(x1);
            if (x1 % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        for (ll i = 0; i < s; i++)
        {
            if ((2 * x) % v[i] == 0)
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
        {
            cout << "YES" << endl;
        }
        else if (ans == 0 && (even >= 2 || odd >= 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
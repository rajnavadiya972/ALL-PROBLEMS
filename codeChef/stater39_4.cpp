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
        ll n, c = 0;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll i = 0;
        while (i != n)
        {
            c++;
            ll t = i;
            i++;
            while (v[i] == v[t] && i != n)
            {
                i++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
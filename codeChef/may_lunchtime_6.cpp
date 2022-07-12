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
        ll n, count = 0;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        while (v.size() != 1)
        {
            vector<ll> temp;
            for (ll i = 0; i < v.size() - 1; i += 2)
            {
                temp.push_back(v[i] & v[i + 1]);
                if (v[i] != v[i + 1])
                {
                    count++;
                }
            }
            if (v.size() % 2 != 0)
            {
                temp.push_back(v[v.size() - 1]);
            }
            v = temp;
        }
        cout << count << endl;
    }
    return 0;
}
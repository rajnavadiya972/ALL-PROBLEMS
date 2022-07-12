#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool sol(map<ll, ll> &m)
{
    for (auto &i : m)
    {
        if (i.second % i.first != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
            m[x]++;
        }
        cout << ((sol(m) == true) ? "YES" : "NO") << endl;
    }
    return 0;
}
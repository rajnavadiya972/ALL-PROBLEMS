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
        ll n, m;
        cin >> n >> m;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll max_num = -10;
        for (ll i = n - 1; i > 0; i--)
        {
            ll a = v[i] + v[i] + ((v[i] - v[i]) % m);
            ll b = v[i] + v[i - 1] + ((v[i] - v[i - 1]) % m);
            ll c = v[i] + v[i - 1] + (((v[i - 1] - v[i]) % m) + ((v[i - 1] == v[i]) ? 0 : m));
            max_num = max(max_num, max(a, max(b, c)));
        }
        cout << max_num << endl;
    }
    return 0;
}
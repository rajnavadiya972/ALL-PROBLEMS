#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ll s, n, c = 0;
    cin >> s >> n;
    ll m = INT_MIN;
    vector<pair<int, int>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
        m = max(m, x);
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        if (s > v[i].first)
        {
            s += v[i].second;
        }
        else
        {
            c++;
        }
    }
    if (s > m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
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
        ll n, last;
        map<ll, ll> m;
        vector<pair<ll, ll>> v;
        cin >> n;
        last = n - 1;
        ll limit = (n % 2 == 0) ? (n / 2) : ((n / 2) + 1);
        for (ll i = 1; i <= limit; i++)
        {
            m[__gcd(i, last) + lcm(i, last)]++;
            last--;
        }
        last = 1;
        for (ll i = n - 1; i > limit; i--)
        {
            m[gcd(i, last) + lcm(i, last)]++;
            last++;
        }
        ll ans;
        for (auto &it : m)
        {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), sortbysec);
        ans = v[0].first;
        cout << ans << "\n";
    }
    return 0;
}
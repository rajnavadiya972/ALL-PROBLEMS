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
        ll n, x, count = 0;
        cin >> n >> x;
        vector<ll> v;
        map<ll, ll> m1;
        map<ll, ll> m2;
        map<ll, ll> m3;
        for (ll i = 0; i < n; i++)
        {
            ll c;
            cin >> c;
            v.push_back(c);
            m1[c]++;
            m2[(c ^ x)]++;
        }
        if (x != 0)
        {
            for (auto &it : m1)
            {
                m3[it.first] += it.second;
            }
            for (auto &it : m2)
            {
                m3[it.first] += it.second;
            }
            ll max_val = INT_MIN, first;
            for (auto &it : m3)
            {
                ll s1 = max_val;
                max_val = max(max_val, (it.second));
                ll s2 = max_val;
                if (s1 < s2)
                {
                    first = it.first;
                }
            }
            cout << max_val << " " << m2[first] << endl;
        }
        else
        {
            ll max_val = INT_MIN;
            for (auto &it : m1)
            {
                max_val = max(max_val, (it.second));
            }
            cout << max_val << " 0" << endl;
        }
    }
    return 0;
}
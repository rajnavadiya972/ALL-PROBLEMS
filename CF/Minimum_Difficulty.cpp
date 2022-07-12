#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll s, c = 0;
    cin >> s;
    vector<ll> v;
    vector<ll> ans;
    for (ll i = 0; i < s; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    for (ll i = 1; i < s - 1; i++)
    {
        for (ll j = 1; j < s; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (j == i + 1)
            {
                c = max(c, v[j] - v[j - 2]);
            }
            else
            {
                c = max(c, v[j] - v[j - 1]);
            }
        }
        ans.push_back(c);
        c=0;
    }
    
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;

    return 0;
}
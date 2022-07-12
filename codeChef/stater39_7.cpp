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
        ll n, k;
        cin >> n >> k;
        ll arr[n + 1] = {0};
        ll temp[n + 1] = {2};
        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v, x;
            cin >> u >> v >> x;
            if (x == 0)
            {
                arr[u]++;
                temp[v] = 1;
            }
            if (x == 0 && u == 1)
            {
                temp[v] = 1;
            }
        }
    }
    return 0;
}
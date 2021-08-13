#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
int a[10000007];
ll b[10000007];
ll c[10000007];
ll d[10000007];
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
        ll m, n, j = 0, k = 0, left = 0;
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                c[i] = 0;
                left = 1;
            }
            else if (left == 1 && (a[i] == 0 || a[i] == 2))
            {
                c[i] = c[i - 1] + 1;
            }
            else
            {
                c[i] = -1;
            }
        }
        left = 0;
        for (ll i = n; i > 0; i--)
        {
            if (a[i] == 2)
            {
                d[i] = 0;
                left = 1;
            }
            else if (left == 1 && (a[i] == 0 || a[i] == 1))
            {
                d[i] = d[i + 1] + 1;
            }
            else
            {
                d[i] = -1;
            }
        }
        c[1]=0;d[1]=0;
        for (ll i = 1; i <= m; i++)
        {
            ll ans;
            if (c[b[i]] == -1 && d[b[i]] == -1)
            {
                cout << "-1"<< " ";
            }
            else if (c[b[i]] == -1 || d[b[i]] == -1)
            {
                cout << max(c[b[i]], d[b[i]]) << " ";
            }
            else
            {
                cout << min(c[b[i]], d[b[i]]) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
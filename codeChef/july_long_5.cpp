#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll M = 1000000007;
ll a[100001];

int main()
{
    for (ll i = 1; i < 100001; i++)
    {
        if (i < 10)
        {
            a[i] = i;
        }
        else
        {
            ll t = i, num = i;
            t = t / 10;
            while (t > 0)
            {
                ll x = t % 10;
                num = (num * 10 + x) % M;
                t = t / 10;
            }
            a[i] = num;
        }
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r, al, y = 0, sum = 1;
        cin >> l >> r;
        al = a[l] % M;
        for (ll i = l + 1; i <= r; i++)
        {
            y += (a[i] % M);
        }
        while (y)
        {
            if (y & 1)
            {
                sum = (sum * al) % M;
            }
            al = (al * al) % M;
            y = y / 2;
        }
        cout << sum << "\n";
    }
    return 0;
}
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
        ll n, mi, ma, ma1, sum = 0;
        cin >> n;
        ll a[n], l[n], r[n], all[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll t = 0;
        l[0] = 0;
        for (ll i = 1; i < n; i++)
        {
            l[i] = __gcd(l[i - 1], a[i - 1]);
        }
        r[n - 1] = 0;
        for (ll i = n - 2; i >= 0; i--)
        {
            r[i] = __gcd(r[i + 1], a[i + 1]);
        }
        for (ll i = 0; i < n; i++)
        {
            all[i] = __gcd(l[i], r[i]);
        }
        ma = *(max_element(all, all + n));
        ma1 = *(max_element(a, a + n));
        ll h = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            if (all[i] == ma && h < a[i])
            {
                t = i;
                h = a[t];
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (i == t)
            {
                a[i] = ma;
            }
            sum += a[i] / ma;
        }
        cout << sum << endl;
    }

    return 0;
}
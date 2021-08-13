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
        ll a[n];
        ll s[33] = {0};
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll i = 0, l = n, m = 32;
        while (l > 0)
        {
            while (a[i] > 0)
            {
                s[m] = s[m] + a[i] % 2;
                a[i] = a[i] / 2;
                m--;
            }
            l--;
            m = 32;
            i++;
        }
        ll c = 0;
        for (i = 0; i < 33; i++)
        {
            if (s[i] % k == 0)
            {
                c = c + (s[i] / k);
            }
            else
            {
                c = c + (s[i] / k) + 1;
            }
        }
        cout << c << endl;
    }

    return 0;
}
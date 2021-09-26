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
        ll n, even = 0, odd = 0;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (n % 2 != 0)
        {
            if (even == ((n / 2) + 1) && odd == (n / 2))
            {
                cout << n << endl;
            }
            else if (even == 0 && odd == n)
            {
                cout << (n / 2) << endl;
            }
            else if (even == n && odd == 0)
            {
                cout << (n / 2) + 1 << endl;
            }
            else if (even > odd)
            {
                cout << (n / 2) + 1 + odd << endl;
            }
            else
            {
                cout << (n / 2) + even << endl;
            }
        }
        else
        {
            if (even == (n / 2) && odd == (n / 2))
            {
                cout << n << endl;
            }
            else if ((even == 0 && odd == n) || (even == n && odd == 0))
            {
                cout << (n / 2) << endl;
            }
            else if (even > odd)
            {
                cout << (n / 2) + odd << endl;
            }
            else
            {
                cout << (n / 2) + even << endl;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
ll M = 1000000007;
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
        ll m, n, k = 1, x = 2;
        cin >> m >> n;
        while (m)
        {
            if (m & 1)
            {
                k = (k * x) % M;
            }
            x = (x * x) % M;
            m = m / 2;
        }
        k -= 1;
        ll sum = 1;
        while (n)
        {
            if (n & 1)
            {
                sum = (sum * k) % M;
            }
            k = (k * k) % M;
            n = n / 2;
        }
        cout << sum << "\n";
    }
    return 0;
}
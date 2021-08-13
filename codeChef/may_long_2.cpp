#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, k, l;
        cin >> n >> x >> k;
        l = (n + 1) % k;
        if ((x % k == 0 || x % k == l) && (x < n + 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ll n, d, sum = 0, jok = 0;
    cin >> n >> d;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (d < (((n - 1) * 10)+sum))
    {
        cout << "-1" << endl;
        return 0;
    }
    if (d == ((n - 1) * 10))
    {
        cout << "-1" << endl;
        return 0;
    }
    ll z = ((n - 1) * 10);
    if (d == (z + sum))
    {
        cout << ((z / 10) * 2) << endl;
    }
    else
    {
        d -= (z + sum);
        cout << ((z / 10) * 2) + (d / 5) << endl;
    }

    return 0;
}
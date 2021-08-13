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
        ll d, x, y, z;
        cin >> d >> x >> y >> z;
        ll a = x * 7;
        ll b = y * d + z * (7 - d);
        cout << max(a, b) << endl;
    }
    return 0;
}
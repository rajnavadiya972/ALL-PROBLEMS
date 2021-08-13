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
        ll D, d, P, Q, x, p = 0, z = 1;
        cin >> D >> d >> P >> Q;
        x = D / d;
        if ((D) % d != 0)
        {
            x++;
            z = d - (D % d);
            p = x - 1;
        }
        ll y = (x * (x - 1)) / 2;
        cout << ((D * P) + (((y * d) - (p * z)) * Q)) << endl;
    }
    return 0;
}
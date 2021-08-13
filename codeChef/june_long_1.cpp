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
        ll x1, x2, xa, xb, a, b;
        cin >> x1 >> x2 >> xa >> xb;
        a = xa / x1;
        b = xb / x2;
        cout << a + b << endl;
    }
    return 0;
}
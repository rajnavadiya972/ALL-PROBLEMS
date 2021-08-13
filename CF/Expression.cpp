#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a, b, c, r1, r2, r3, r4;
    cin >> a >> b >> c;
    r1 = (a + b + c);
    r2 = (a + b) * c;
    r3 = a * b * c;
    r4 = a * (b + c);
    cout << max(max(r1, r2), max(r3, r4)) << endl;
    return 0;
}
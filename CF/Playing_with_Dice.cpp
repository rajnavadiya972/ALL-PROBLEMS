#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, b, x, y, z;
    cin >> a >> b;
    if (a == b)
    {
        x = 0;
        y = 6;
    }
    else if (a > b)
    {
        x = (6 - a + 1) + (abs(a - b) - 1) / 2;
        y = abs(a - b - 1) % 2;
    }
    else
    {
        x = a + (abs(a - b) - 1) / 2;
        y = abs(a - b - 1) % 2;
    }
    z = 6 - x - y;
    cout << x << " " << y << " " << z << endl;
    return 0;
}
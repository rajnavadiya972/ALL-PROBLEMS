#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k, even, odd, c = 0;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        even = n / 2;
    }
    else
    {
        even = (n / 2) + 1;
        c = 1;
    }
    if (k <= even)
    {
        cout << (2 * k) - 1 << endl;
    }
    else
    {
        if (c == 1)
        {
            cout << (2 * k) - (n + 1) << endl;
        }
        else
        {
            cout << (2 * k) - n << endl;
        }
    }
    return 0;
}
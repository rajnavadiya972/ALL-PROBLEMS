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
        ll a, b;
        cin >> a >> b;
        if ((b - a) % 8 == 0)
        {
            cout << (b - a) / 8 << endl;
        }
        else
        {
            cout << ((b - a) / 8) + 1 << endl;
        }
    }
    return 0;
}
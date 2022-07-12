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
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        ll total = (y * z) + w;
        if (total == x)
        {
            cout << "filled" << endl;
        }
        else if (total < x)
        {
            cout << "Unfilled" << endl;
        }
        else
        {
            cout << "overFlow" << endl;
        }
    }
    return 0;
}
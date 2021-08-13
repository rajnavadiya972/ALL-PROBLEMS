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
        ll a, a1, a2;
        cin >> a;
        a1 = a / 3;
        if (a1 * 3 == a)
        {
            a2 = a1;
        }
        else if (a - (3 * a1) == 1)
        {
            a2 = a1;
            a1 = a1 + 1;
        }
        else
        {
            a2 = a1 + 1;
        }
        cout << a1 << " " << a2 << endl;
    }

    return 0;
}
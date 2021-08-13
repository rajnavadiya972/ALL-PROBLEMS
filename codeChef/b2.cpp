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
        ll a, b, c, d = 1;
        cin >> a >> b >> c;
        if (a > (b * c) || (b == 1 && a > 1))
        {
            cout << "-1" << endl;
        }
        else
        {
            for (ll i = 1; d <= a; i++)
            {
                if (i > b)
                {
                    i = 1;
                }
                cout << i << " ";
                d++;
            }
            cout << endl;
        }
    }
    return 0;
}

// if (c1 > c)
// {
//     cout << "-1" << endl;
// }
// else
// {
//     d = 1;
//     for (ll i = 1; d <= a; i++)
//     {
//         if (i > b)
//         {
//             i = 1;
//         }
//         cout << i << " ";
//         d++;
//     }
//     cout << endl;
// }
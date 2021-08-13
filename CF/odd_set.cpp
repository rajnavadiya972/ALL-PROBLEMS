#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, o = 0, e = 0;
        cin >> a;
        ll b[2 * a];
        for (ll i = 0; i < 2 * a; i++)
        {
            cin >> b[i];
            if (b[i] % 2 == 0)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        if (o == e)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
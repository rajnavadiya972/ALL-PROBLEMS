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
        ll a;
        cin >> a;
        char b[a + 1], c[a + 1], d[a + 1];
        for (ll i = 0; i < a; i++)
        {
            cin >> b[i];
        }
        if (a % 2 == 0)
        {
            for (ll i = 0; i < a; i++)
            {
                if (i % 2 != 0)
                {
                    c[i - 1] = b[i];
                }
                else
                {
                    c[i + 1] = b[i];
                }
            }
        }
        else
        {
            for (ll i = 0; i < a - 1; i++)
            {
                if (i % 2 != 0)
                {
                    c[i - 1] = b[i];
                }
                else
                {
                    c[i + 1] = b[i];
                }
            }
            c[a - 1] = b[a - 1];
        }
        c[a] = '\0';
        for (ll i = 0; i < a; i++)
        {
            d[i] = 'a' + 'z' - c[i];
        }
        d[a] = '\0';
        for (ll i = 0; i < a; i++)
        {
            cout << d[i];
        }
        cout << endl;
    }
    return 0;
}
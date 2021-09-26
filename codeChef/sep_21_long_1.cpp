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
        ll d, e;
        vector<ll> v(3);
        for (ll i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        cin >> d >> e;
        sort(v.begin(), v.end());
        if (v[0] <= e)
        {
            if ((v[1] + v[2]) <= d)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (v[1] <= e && (v[0] + v[2]) <= d)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    if (v[2] <= e && (v[0] + v[1]) <= d)
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
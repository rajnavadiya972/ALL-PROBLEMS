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
        ll a, c_s = 0, c_l = 0;
        cin >> a;
        for (ll i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            if (s == "START38")
            {
                c_s++;
            }
            else
            {
                c_l++;
            }
        }
        cout << c_s << " " << c_l << endl;
    }
    return 0;
}
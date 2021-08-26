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
        ll a, b, ans;
        cin >> a >> b;
        if (a <= (b / 2))
        {
            if (b % 2 == 0)
            {
                ans = (b / 2) - 1;
            }
            else
            {
                ans = (b / 2);
            }
        }
        else
        {
            ans = (b - a);
        }
        cout << ans << endl;
    }
    return 0;
}
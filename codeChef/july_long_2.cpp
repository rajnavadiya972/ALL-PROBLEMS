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
        ll g, c, ans;
        cin >> g >> c;
        ans = c * c / (2 * g);
        cout << ans << endl;
    }

    return 0;
}
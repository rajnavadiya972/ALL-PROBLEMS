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
        cout << max(500 - (2 * a) + 1000 - (4 * (a + b)), 1000 - (4 * b) + 500 - (2 * (a + b))) << endl;
    }
    return 0;
}
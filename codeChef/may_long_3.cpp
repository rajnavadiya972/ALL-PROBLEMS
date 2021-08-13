#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e5 + 10;
const ll M = 1e9 + 7;
// vector<int> v;
ll a[N];
int main()
{
    a[1] = 1;
    for (ll i = 2; i < N; i++)
    {
        a[i] = (2 * a[i - 1]) % M;
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << a[n] << endl;
    }

    return 0;
}
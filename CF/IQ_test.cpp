#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll a[3], c[3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    ll i, b;
    for (i = 1; i <= n; i++)
    {
        cin >> b;
        a[b % 2] = i;
        c[b % 2]++;
    }
    if (c[0] == 1)
        cout << a[0];
    else
        cout << a[1];
    return 0;
}
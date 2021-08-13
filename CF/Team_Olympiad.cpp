#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ll n, c1 = 0, c2 = 0, c3 = 0;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            c1++;
        }
        if (arr[i] == 2)
        {
            c2++;
        }
        if (arr[i] == 3)
        {
            c3++;
        }
    }
    ll m = min(c1, min(c2, c3));
    cout << m << endl;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] == 1)
            {
                cout << j + 1 << " ";
                arr[j] = 0;
                break;
            }
        }
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] == 2)
            {
                cout << j + 1 << " ";
                arr[j] = 0;
                break;
            }
        }
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] == 3)
            {
                cout << j + 1 << " ";
                arr[j] = 0;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
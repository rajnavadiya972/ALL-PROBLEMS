#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, cross = 1, oth = 1;
    cin >> n;
    char arr[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (j == i)
            {
                if (arr[i][j] != arr[i][n - i - 1] || arr[0][0] != arr[i][n - i - 1] || arr[0][0] != arr[i][j])
                {
                    cross = 0;
                }
            }
            else if (j == n - i - 1)
            {
                continue;
            }
            else if (arr[i][j] != arr[0][1] || arr[i][j] == arr[0][0])
            {
                oth = 0;
            }
        }
    }
    if (oth == 1 && cross == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
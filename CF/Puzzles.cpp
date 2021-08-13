#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m, dif = INT_MAX;
    cin >> n >> m;
    ll a[m];
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + m + 1);
    for (int i = 1; i <= (m - n + 1); i++)
    {
        for (int j = (i + n - 1); j <= m; j++)
        {
            if ((abs(a[i] - a[j])) < dif)
            {
                dif = abs(a[i] - a[j]);
            }
        }
    }
    cout << dif << endl;
    return 0;
}
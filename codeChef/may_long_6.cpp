#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, c = 0, ans = 0;
        cin >> n >> m;
        for (int i = 1; i < n; i++)
        {
            c += ans;
            ans = 0;
            for (int j = i + 1; j <= n; j += i)
            {
                ans++;
            }
        }

        cout << c << endl;
    }
    return 0;
}
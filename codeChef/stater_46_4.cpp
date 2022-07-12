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
        ll n, count = 0, m;
        cin >> n;
        m = n;
        string s;
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                m--;
            }
            else
            {
                break;
            }
        }
        for (ll i = 0; i < m; i++)
        {
            if (i == 0 && s[i] == '1')
            {
                count++;
            }
            else if (s[i] == '1' && s[i - 1] == '0')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
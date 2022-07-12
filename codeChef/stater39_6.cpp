#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    const unsigned int M = 1000000007;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                continue;
            }
            else
            {
                if (s[i] > 'a' && s[i] < 'e')
                {
                    if (abs(s[i] - 'a') == abs(s[i] - 'e'))
                    {
                        c++;
                    }
                }
                else if (s[i] > 'e' && s[i] < 'i')
                {
                    if (abs(s[i] - 'e') == abs(s[i] - 'i'))
                    {
                        c++;
                    }
                }
                else if (s[i] > 'i' && s[i] < 'o')
                {
                    if (abs(s[i] - 'i') == abs(s[i] - 'o'))
                    {
                        c++;
                    }
                }
                else if (s[i] > 'o' && s[i] < 'u')
                {
                    if (abs(s[i] - 'o') == abs(s[i] - 'u'))
                    {
                        c++;
                    }
                }
            }
        }
        if (c == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            ll ans = 1;

            ll x = 2;

            while (c > 0)
            {
                if (c & 1)
                {
                    ans = (ans * x) % M;
                }
                c = c >> 1;
                x = (x * x) % M;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
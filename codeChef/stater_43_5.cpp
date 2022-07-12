#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char alfabate[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 != 0 && (n / 2) + 1 < k)
        {
            cout << "-1" << endl;
        }
        else if (n % 2 == 0 && (n / 2) < k)
        {
            cout << "-1" << endl;
        }
        else
        {
            int x = 0;
            char s[n];
            if (n % 2 != 0)
            {
                for (ll i = 0; i <= n / 2; i++)
                {
                    s[i] = alfabate[x++];
                    if (x + 1 > k)
                    {
                        x = 0;
                    }
                }
                for (ll i = n - 1; i > n / 2; i--)
                {
                    s[i] = s[n - 1 - i];
                }
                for (ll i = 0; i < n; i++)
                {
                    cout << s[i];
                }
                cout << "\n";
            }
            else
            {
                for (ll i = 0; i < n / 2; i++)
                {
                    s[i] = alfabate[x++];
                    if (x + 1 > k)
                    {
                        x = 0;
                    }
                }
                for (ll i = n - 1; i >= n / 2; i--)
                {
                    s[i] = s[n - 1 - i];
                }
                for (ll i = 0; i < n; i++)
                {
                    cout << s[i];
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
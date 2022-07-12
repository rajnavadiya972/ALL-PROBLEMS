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
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                cout << "A";
            else if (s[i] == '0' && s[i + 1] == '1')
                cout << "T";
            else if (s[i] == '1' && s[i + 1] == '0')
                cout << "C";
            else
                cout << "G";
        }
        cout << endl;
    }
    return 0;
}
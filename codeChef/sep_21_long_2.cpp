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
        int n, a, b, c_0 = 0, c_1 = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '0')
            {
                c_0++;
            }
            else
            {
                c_1++;
            }
        }
        cout << ((c_0 * a) + (c_1 * b)) << endl;
    }
    return 0;
}
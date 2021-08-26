#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        int team1 = 0, team2 = 0;
        for (ll i = 0; i < 10; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 0)
            {
                if (x == 1)
                {
                    team1++;
                }
            }
            else
            {
                if (x == 1)
                {
                    team2++;
                }
            }
        }
        if (team1 == team2)
        {
            cout << "0" << endl;
        }
        else if (team1 > team2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}
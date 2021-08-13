#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b,a1=0,b1=0;
        cin >> n >> a >> b;
        string q;
        for (int i = 0; i < n; i++)
        {
            cin >> q;
            if ((q[0] == 'E') || (q[0] == 'Q') || (q[0] == 'U') || (q[0] == 'I') || (q[0] == 'N') || (q[0] == 'O') || (q[0] == 'X'))
            {
                a1+=a;
            }
            else
            {
                b1+=b;
            }
        }

        if (a1 > b1)
        {
            cout << "SARTHAK" << endl;
        }
        if (b1 > a1)
        {
            cout << "ANURADHA" << endl;
        }
        if (a1 == b1)
        {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}
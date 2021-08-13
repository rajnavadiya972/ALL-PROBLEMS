#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, x;
        cin >> a >> b;
        map <int,int> m;
        for (long long int i = 0; i < a; i++)
        {
            long long int y;
            cin >> y;
            m[y]++;
        }
        x = m.size();
        // if (x == a && x == b)
        // {
        //     cout << 0 << endl;
        // }
        // else if (b < x)
        // {
        //     if (x == a)
        //     {
        //         cout << b << endl;
        //     }
        //     else
        //     {
        //         cout << x << endl;
        //     }
        // }
        // else if (b >= x)
        // {
        //     cout << x << endl;
        // }
    }

    return 0;
}
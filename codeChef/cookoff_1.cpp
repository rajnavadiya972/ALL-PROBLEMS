#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int am, bm, cm, tm, a, b, c;
        cin >> am >> bm >> cm >> tm >> a >> b >> c;
        if ((am + bm + cm >= tm) && (a + b + c >= tm))
        {
            if ((am <= a) && (bm <= b) && (cm <= c))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
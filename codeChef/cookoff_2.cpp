#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],b[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x = 0, count = 0,t;
        cin >> n >> m;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i < n ; i++)
        {
            t=abs(a[i]-a[i-1]);
            x = b[i-1] + b[i] - (m*t);
            b[i] = x;
            count = 1;
        }
        if (count == 0)
        {
            cout << b[0] << endl;
        }
        else
        {
            cout << x << endl;
        }
    }

    return 0;
}
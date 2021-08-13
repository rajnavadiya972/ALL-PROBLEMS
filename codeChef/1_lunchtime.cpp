#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n], k = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0)
            {
                b[k] = a[i];
                k++;
            }
        }
        if (sum % 2 == 0)
        {
            cout << "0" << endl;
        }
        if (sum % 2 != 0)
        {
            if (k == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
                int min = b[0], m;
                for (int i = 0; i < k; i++)
                {
                    if (b[i] < min)
                    {
                        min = b[i];
                        m = i;
                    }
                }
                for (int i = 0; i < n; i++)
                {
                    if (a[i] == b[m])
                    {
                        x = i;
                    }
                }
                a[x] = pow(b[m], max(0, (b[m] / 2) - 1));
                sum = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += a[i];
                }
                if (sum % 2 == 0)
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "-1" << endl;
                }
            }
        }
    }
    return 0;
}
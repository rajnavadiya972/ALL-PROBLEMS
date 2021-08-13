#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, c = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = a[k - 1], l = k;
    if (m == 0)
    {
        for (int i = 0; i < k; i++)
        {
            if (a[i] > 0)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    else
    {
        for (int i = k; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                l++;
            }
            else
            {
                break;
            }
        }
        cout << l << endl;
    }
    return 0;
}
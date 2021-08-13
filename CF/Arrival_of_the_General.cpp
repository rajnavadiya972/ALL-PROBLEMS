#include <bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int max, min, n, max1, min1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    max = min = a[1];
    for (int i = 1; i <= n; i++)
    {
        if (max < a[i])
        {
            max1 = i;
            max = a[i];
        }
        if (min >= a[i])
        {
            min1 = i;
            min = a[i];
        }
    }
    if (a[1] == max && a[n] == min)
    {
        cout << "0" << endl;
    }
    else if (a[1] == max)
    {
        cout << n - min1 << endl;
    }
    else if (a[n] == min)
    {
        cout << max1 - 1 << endl;
    }
    else if (max1 > min1)
    {
        cout << max1 - 1 + n - min1 - 1 << endl;
    }
    else
    {
        cout << max1 - 1 + n - min1 << endl;
    }
    return 0;
}
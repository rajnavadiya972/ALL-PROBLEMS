#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum = (sum / 2) + 1;
    sort(a, a + n);
    for (int i = (n - 1); i >= 0; i--)
    {
        sum = sum - a[i];
        c++;
        if (sum <= 0)
        {
            break;
        }
    }
    cout << c << endl;
    return 0;
}
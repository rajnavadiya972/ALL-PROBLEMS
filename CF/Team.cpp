#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int c = 0;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                c++;
            }
        }
        if (c >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int t = n;
    while (n > 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            c = 1;
        }
        else
        {
            c = 0;
            break;
        }
        n = n / 10;
    }
    if (t % 4 == 0 || t % 7 == 0 || t % 47 == 0)
    {
        c = 1;
    }
    if (c == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
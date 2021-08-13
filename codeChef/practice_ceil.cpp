#include <bits/stdc++.h>
using namespace std;

int func(int &x, int &count)
{
    int n;
    for (int i = 11; i >= 0; i--)
    {
        int y = pow(2, i);
        if ((x % y) != x)
        {
            n = pow(2, i);
            count++;
            break;
        }
    }
    x -= n;
    if (x == 0)
    {
        return count;
    }
    else
    {
        return func(x, count);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, count = 0;
        cin >> x;
        int p = func(x, count);
        cout << p << "\n";
    }

    return 0;
}
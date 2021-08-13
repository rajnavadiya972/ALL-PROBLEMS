#include <bits/stdc++.h>
using namespace std;

long long int func(long long int n)
{
    if (n == 1)
    {
        return 20;
    }
    else if (n == 2)
    {
        return 36;
    }
    else if (n == 3)
    {
        return 51;
    }
    else if (n == 4)
    {
        return 60;
    }
    else if (n == 5)
    {
        return 76;
    }
    else if (n == 6)
    {
        return 88;
    }
    else if (n == 7)
    {
        return 99;
    }
    else if (n == 8)
    {
        return 104;
    }
    else
    {
        long long int x = (n - 4) / 4;
        int y = n % 4;
        return (44 * x) + func(y + 4);
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        cout << func(n) << endl;
    }

    return 0;
}
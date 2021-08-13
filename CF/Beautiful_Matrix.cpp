#include <bits/stdc++.h>
using namespace std;
int m[6][6];
int main()
{
    int a, b, count = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    if (b % 2 == 0)
    {
        b -= 1;
        count += 1;
    }
    else if (b != 3)
    {
        b -= 2;
        count += 2;
    }
    if (a % 2 == 0)
    {
        a -= 1;
        count += 1;
    }
    else if (a != 3)
    {
        a -= 2;
        count += 2;
    }
    cout << count << endl;
    return 0;
}
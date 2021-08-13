#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, n, b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int d = 0;
        cin >> n;
        while (n > 0)
        {
            // b = n % 10;
            d = d + (n % 10);
            n = n / 10;
        }
        cout << d << endl;
    }

    return 0;
}
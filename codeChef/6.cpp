#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    int fac;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        fac = 1;
        cin >> num;
        if (num == 0 || num == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            for (int j = num; j >= 1; j--)
            {
                fac *= j;
            }
            cout << fac << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0, b = 0, c = 0;
        cin >> n;
        string arr;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == '1')
            {
                a++;
            }
            if (arr[i] == '0')
            {
                b++;
            }
            if (a == b)
            {
                cout << "YES" << endl;
                c = 1;
                break;
            }
        }
        if (a == b && c == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (c == 0)
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
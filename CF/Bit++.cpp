#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == '+')
            {
                x++;
                break;
            }
            if (s[i] == '-')
            {
                x--;
                break;
            }
        }
    }
    cout << x << endl;
    return 0;
}
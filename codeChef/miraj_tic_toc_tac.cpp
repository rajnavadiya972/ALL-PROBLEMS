#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char a[4][4];
        int ctx = 0, cto = 0, count = 0, cty = 0, winx = 0, wino = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                {
                    ctx++;
                }
                else if (a[i][j] == 'O')
                {
                    cto++;
                }
                else if (a[i][j] == '_')
                {
                    cty++;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (a[i][0] == a[i][1] && a[i][2] == a[i][1])
            {
                if (a[i][0] == 'X')
                {
                    winx++;
                }
                else if (a[i][0] == 'O')
                {
                    wino++;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (a[0][i] == a[1][i] && a[2][i] == a[1][i])
            {
                if (a[0][i] == 'X')
                {
                    winx++;
                }
                else if (a[0][i] == 'O')
                {
                    wino++;
                }
            }
        }

        if (a[0][0] == a[1][1] && a[2][2] == a[1][1])
        {
            if (a[1][1] == 'X')
            {
                winx++;
            }
            else if (a[1][1] == 'O')
            {
                wino++;
            }
        }
        if (a[0][2] == a[1][1] && a[2][0] == a[1][1])
        {
            if (a[1][1] == 'X')
            {
                winx++;
            }
            else if (a[1][1] == 'O')
            {
                wino++;
            }
        }
        if ((winx == 1 && wino == 1) || ((ctx - cto) < 0) || ((ctx - cto) > 1))
        {
            cout << "3" << endl;
        }
        else if (ctx == 0 && cto == 0 && cty == 9)
        {
            cout << "2" << endl;
        }
        else if (winx >= 1 && wino == 0 && (ctx > cto))
        {
            cout << "1" << endl;
        }
        else if (winx == 0 && wino >= 1 && (ctx == cto))
        {
            cout << "1" << endl;
        }
        else if (winx == 0 && wino == 0 && cty == 0)
        {
            cout << "1" << endl;
        }
        else if (winx == 0 && wino == 0 && cty > 0)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int win(char a[4][4], char s)
{
    ll c = 0;
    for (int i = 0; i < 3; i++)
    {
        if ((a[i][0] == s && a[i][0] == a[i][1] && a[i][1] == a[i][2]))
        {
            c++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if ((a[0][i] == s && a[0][i] == a[1][i] && a[1][i] == a[2][i]))
        {
            c++;
        }
    }
    if (a[0][0] == s && a[0][0] == a[1][1] && a[1][1] == a[2][2])
    {
        c++;
    }
    if (a[0][2] == s && a[0][2] == a[1][1] && a[1][1] == a[2][0])
    {
        c++;
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin >> t;
    while (t--)
    {
        char a[4][4];
        int cx = 0, co = 0, c_ = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];

                if (a[i][j] == 'X')
                {
                    cx++;
                }
                if (a[i][j] == 'O')
                {
                    co++;
                }
                if (a[i][j] == '_')
                {
                    c_++;
                }
            }
        }
        if (c_ == 0)
        {
            if (cx == 5 && co == 4)
            {
                int d = win(a, 'X');
                int e = win(a, 'O');
                if ((d >= 1 && e == 0) || (d == 0 && e == 0))
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "3" << endl;
                }
            }
            else
            {
                cout << "3" << endl;
            }
        }
        else
        {
            int d = win(a, 'X');
            int e = win(a, 'O');
            if ((cx == 0 && co == 0 && c_ == 9))
            {
                cout << "2" << endl;
            }
            if ((c_ % 2 == 0) ? ((cx == co + 1) && c_ != 9) : ((cx == co) && c_ != 9))
            {
                if ((d >= 1 && e == 0 && cx > co) || (e >= 1 && d == 0 && cx == co))
                {
                    cout << "1" << endl;
                }
                else if ((d == 0 && e == 0))
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "3" << endl;
                }
            }
            else if (c_ != 9)
            {
                cout << "3" << endl;
            }
        }
        /*
        int d = win(a, 'X');
        int e = win(a, 'O');
        if (d == 1 && e == 1 || cx < co || cx > co + 1)
        {
            cout << "3" << endl;
        }
        else if (cx == 0 && co == 0 && c_ == 9)
        {
            cout << "2" << endl;
        }
        else if (d == 0 && e == 0 && c_ == 0)
        {
            cout << "1" << endl;
        }
        else if (d == 1 && e == 0 && cx > co)
        {
            cout << "1" << endl;
        }
        else if (d == 0 && e == 1 && cx == co)
        {
            cout << "1" << endl;
        }
        else if (d == 0 && e == 0 && c_ > 0)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        } */
    }
    return 0;
}
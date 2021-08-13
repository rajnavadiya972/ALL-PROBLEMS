#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool win(char a[4][4])
{
    char s;
    int c=0;
    map<char, int> m;
    for (int i = 0; i < 3; i++)
    {
        s = a[i][0];
        if ((a[i][0] == a[i][1] && a[i][1] == a[i][2]))
        {
            // cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
            m[s]++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        s = a[0][i];
        if ((a[0][i] == a[1][i] && a[1][i] == a[2][i]))
        {
            // cout << a[0][i] << " " << a[1][i] << " " << a[2][i] << endl;
            m[s]++;
        }
    }
    {
        s = a[0][0];
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2])
        {
            // cout << a[0][0] << " " << a[1][1] << " " << a[2][2] << endl;
            m[s]++;
            c=1;
        }
        s = a[0][2];
        if (a[0][2] == a[1][1] && a[1][1] == a[2][0])
        {
            // cout << a[0][2] << " " << a[1][1] << " " << a[2][0] << endl;
            m[s]++;
            c=1;
        }
    }
    if ((m['X'] >= 1 && m['O'] == 0 && c==1) || (m['O'] >= 1 && m['X'] == 0 && c==1))
    {
        return true;
    }
    else if ((m['X'] == 1 && m['O'] == 0) || (m['O'] == 1 && m['X'] == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int win1(char a[4][4])
{
    char s;
    map<char, int> m;
    for (int i = 0; i < 3; i++)
    {
        s = a[i][0];
        if ((a[i][0] == a[i][1] && a[i][1] == a[i][2]))
        {
            cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
            m[s]++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        s = a[0][i];
        if ((a[0][i] == a[1][i] && a[1][i] == a[2][i]))
        {
            cout << a[0][i] << " " << a[1][i] << " " << a[2][i] << endl;
            m[s]++;
        }
    }
    s = a[0][0];
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2])
    {
        cout << a[0][0] << " " << a[1][1] << " " << a[2][2] << endl;
        m[s]++;
    }
    s = a[0][2];
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0])
    {
        cout << a[0][2] << " " << a[1][1] << " " << a[2][0] << endl;
        m[s]++;
    }
    if ((m['X'] == 1 && m['O'] == 0) || (m['O'] == 1 && m['X'] == 0))
    {
        return 1;
    }
    else if (m['O'] == 0 && m['X'] == 0)
    {
        return 2;
    }
    else
    {
        return 3;
    }
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
                bool w = win(a);
                if (w == true)
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
            if ((cx == co) || (cx + 1 == co))
            {
                int d = win1(a);
                if (d == 1)
                {
                    cout << "1" << endl;
                }
                else if (d == 2)
                {
                    cout << "2" << endl;
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
    }
    return 0;
}
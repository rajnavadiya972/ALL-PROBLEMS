#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int s1[N];
int main()
{
    string s;
    int j = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
    {
        s1[j] = s[i] - '0';
        j++;
    }
    for (int i = 0; i < j - 1; i++)
    {
        for (int k = 0; k < j - i - 1; k++)
        {
            if (s1[k] > s1[k + 1])
            {
                int t = s1[k];
                s1[k] = s1[k + 1];
                s1[k + 1] = t;
            }
        }
    }
    for (int i = 0; i < j; i++)
    {
        if (j == 1)
        {
            cout << s1[i];
        }
        else
        {
            cout << s1[i];
            if (i < j - 1)
            {
                cout << "+";
            }
        }
    }

    return 0;
}
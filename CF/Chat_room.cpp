#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int j = 0, c = 0;
    char s1[6] = "hello";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s1[j])
        {
            c++;
            j++;
            if (c == 5)
            {
                break;
            }
        }
    }
    if (c == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
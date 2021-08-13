#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char s1[200];
    int j = 0;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u') && (s[i] != 'y'))
        {
            s1[j] = s[i];
            j++;
        }
    }
    s1[j]='\0';
    for (int i = 0; i < j ; i++)
    {
        cout << "." << s1[i];
    }
    return 0;
}
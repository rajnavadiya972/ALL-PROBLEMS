#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int a = s1.compare(s2);
    cout << a;
    return 0;
}
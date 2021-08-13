#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin >> s;
    regex y("WUB");
    string ans = regex_replace(s, y, " ");
    cout << ans;
    return 0;
}
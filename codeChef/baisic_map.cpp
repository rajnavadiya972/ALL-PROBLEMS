#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    map<char,int> m;
    for (int i = 0; i < 3; i++)
    {
        char a;
        cin>>a;
        m[a]++;
    }
    cout<<m['a'];
return 0;
}
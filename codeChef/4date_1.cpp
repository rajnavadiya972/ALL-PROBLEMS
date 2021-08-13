#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,o,c,x;
    cin>>r>>o>>c;
    x=(20-o)*6;
    if (c+(x*6)>r)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
return 0;
}
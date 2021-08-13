#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,e;
    cin>>t>>a>>b;
    int c[t],d[t];
    for (int i = 0; i < t; i++)
    {
        cin>>c[i];
        if (b+c[i]==a)
        {
            d[i]=1;
            e=i;
            cout<<"YES"<<endl;
            break;
        }
    }
    if (d[e]!=1)
    {
        cout<<"NO"<<endl;
    }
    
return 0;
}
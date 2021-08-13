#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (t--)
    {
        int u,v,a,s,b;
        float x;
        cin>>u>>v>>a>>s;
        b=u*u-2*a*s;
        x=pow(b,1/2);
        if (v==u)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if (v>=x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        
    }
    
return 0;
}
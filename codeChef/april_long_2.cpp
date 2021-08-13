#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
        float k1,k2,k3,v,x,r,y;
        cin>>k1>>k2>>k3>>v;
        x=(float)(k1*k2*k3*v);
        r=100/x;
        y=round(r);
            if (r<9.57500)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
return 0;
}
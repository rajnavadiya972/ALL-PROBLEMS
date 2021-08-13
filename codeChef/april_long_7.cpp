#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,s,t,count=0;
    cin>>t;
    while (t--)
    {
        cin>>a>>s;
        long long int x[a-1],y[a-1],r[a],l[a];
        for (int i = 0; i < (a-1); i++)
        {
            cin>>x[i]>>y[i];
        }
        for (long long int j = 0; j < n; j++)
        {
            cin>>r[j];
        }
        for (long long int j = 0; j < n; j++)
        {
            cin>>l[j];
        }
        if (s==1 && a==1)
        {
            cout<<"0"<<endl;
            count=1;
        }
        else if (s==1 && count==0)
        {
            cout<<"1"<<endl;
        }
        if (s==2)
        {
            
        }
        
    }
    
return 0;
}
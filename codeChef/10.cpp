#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int ans=0;
        int count=0;
        cin>>t;
        while (t>0)
        {
           int a=t%10;
            ans=ans*10+a;
            t/=10;
        }
        cout<<ans<<endl;
    }
    
return 0;
}
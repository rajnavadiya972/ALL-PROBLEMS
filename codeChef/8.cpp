#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0,c=0,t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>t;
        int k=t;
        c=k%10;
        while (t>0)
        {
            int a=t%10;
            f=a;
            t=t/10;
        }
    cout<<c+f<<endl;
    }
return 0;
}
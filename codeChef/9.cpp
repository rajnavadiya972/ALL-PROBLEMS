#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int count=0;
        cin>>t;
        while (t>0)
        {
           int a=t%10;
            if (a==4)
            {
                count++;
            }
            t/=10;
        }
        cout<<count<<endl;
    }
    
return 0;
}
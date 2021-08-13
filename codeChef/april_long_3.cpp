#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,j,len,count=0;
        cin>>n>>k;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if (a[i]=='*')
            {
                len=0;
                j=0;
                while (j<n)
                {
                    if ('*'==a[i])
                    {
                        len++;
                        i++;
                        j++;
                    }
                    else{
                        break;
                    }

                    if (len==k)
                    {
                        count=1;
                    }
                    
                }
                i--;
            }
            
        }
        if (count==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
return 0;
}
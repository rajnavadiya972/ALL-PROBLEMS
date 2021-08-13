#include <bits/stdc++.h>
using namespace std;
const int N=100;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        // int n, i = 0, k = 0, m = 0;
        // scanf("%d", &n);
        // int y = n;
        // int z = n;
        // int a[100] = {0}, b[100] = {0};
        // int c[100] = {0};
        // printf("BINARY\n");
        // while (n > 0)
        // {
        //     a[i] = n % 2;
        //     n = n / 2;
        //     i++;
        // }
        // for (int j = (i - 1); j >= 0; j--)
        // {
        //     printf("%d", a[j]);
        // }
        int b[N],c[N],n,j,count=0,i;
        string s;
        cin>>s;
        n=s.length();
        // cout<<s[0]<<" "<<s[1];
        for (i = 0; i < pow(2,n); i++)
        {
            int z=i;
            j=0;
            if (z==0)
            {
                b[j]=0;
                j=1;
            }
            else
            {
                while (z>0)
                {
                    b[j]=z%2;
                    z=z/2;
                    j++;
                }
            }
            int r=0;
            for (int k = j-1; k >= 0; k--)
            {
                c[k]=b[r];
                r++;
                // cout<<c[k];
            }
            int g=0;
            for (i = 0; i < n,g < j; i++)
            {
                if (c[g]==s[i])
                {
                    g++;
                }
            }
            if (j!=r)
            {
                for (i = 0; i < j; i++)
                {
                    cout<<c[i];
                }
                break;
            }
        }
        

    }
    
return 0;
}
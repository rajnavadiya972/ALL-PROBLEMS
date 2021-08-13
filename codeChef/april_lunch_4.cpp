#include <bits/stdc++.h>
using namespace std;
const long long int M=1e9+7;
int main()
{
    long long int n,q,sum=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int x[q];
    for (int i = 0; i < q; i++)
    {
        cin>>x[i];
        sum=(sum%M)+(x[i]%M);
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum*pow(q,2);
        sum=sum%M;
    }
    cout<<sum<<endl;
return 0;
}
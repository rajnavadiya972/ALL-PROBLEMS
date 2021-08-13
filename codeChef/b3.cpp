#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll p[10006][10006];
ll a[10000][10006];
ll b[10006];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll m,n,k=1;
        cin>>m>>n;
        for (ll i = 1; i <= m; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cin>>a[i][j];
            }
        }
        for (ll i = 1; i <= m; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                p[i][j]=a[i][j]+p[i-1][j]+p[i][j-1]-p[i-1][j-1];
            }
        }
        cout<<endl;
        ll o;
        cin>>o;
        for (ll i = o; i <= m; i++)
        {
            for (ll j = o; j <= n; j++)
            {
                b[k]=p[i][j]-p[i][j-o]-p[i-o][j]+p[i-o][j-o];
                k++;
            }
        }
        cout<<*(max_element(b,b+k+1))<<endl;
    }
return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    // ll a[n];
    // for (int i = 1; i <= n; i++)
    // {
    //     int k;
    //     cin >> k;
    //     a[k] = i;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    map<int,int> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        m[x]=i;
    }
    for (auto it:m)
    {
        cout<<it.second<<" ";
    }
    
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ll x, y,c=0;
    cin >> x >> y;
    if (x < y)
    {
        cout << "-1" << endl;
        c=1;
    }
    else
    {
        ll z = x / 2;
        if (z % y == 0 && x%2==0)
        {
            cout << z << endl;
            c=1;
        }
        else
        {
            for (ll i = z+1; i <= x; i++)
            {
                if (i%y==0)
                {
                    cout<<i<<endl;
                    c=1;
                    break;
                }
            }
        }
    }
    if (c==0)
    {
        cout<<"-1"<<endl;
    }
    
    return 0;
}
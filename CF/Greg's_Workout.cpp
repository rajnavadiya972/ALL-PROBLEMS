#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll s, a = 0, b = 0, c = 0, count = 1;
    cin >> s;
    vector<ll> v;
    for (ll i = 0; i < s; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        if (count == 1)
        {
            a += x;
            count++;
        }
        else if (count == 2)
        {
            b += x;
            count++;
        }
        else
        {
            count = 1;
            c += x;
        }
    }
    ll ans,max;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    if (max == a)
    {
        cout << "chest" << endl;
    }
    else if (max == b)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int start = 1, end = n - 2;
        a = (1000 - v[0]);
        b = v[n - 1];
        while (start < end)
        {
            if (v[start] < 500)
            {
                a += (1000 - v[start]);
                start++;
            }
            if (v[end] > 500)
            {
                b += v[end];
                end--;
            }
            if (v[start] == 500)
            {
                if (a > b)
                {
                    b += 500;
                    start++;
                }
                else
                {
                    a += 500;
                    start++;
                }
            }
            if (v[end] == 500)
            {
                if (a > b)
                {
                    b += 500;
                    end++;
                }
                else
                {
                    a += 500;
                    end++;
                }
            }
        }
        if (n % 2 != 0)
        {
            if (v[start] > 500)
            {
                b += v[start];
            }
            else if (v[start] < 500)
            {
                a += (1000 - v[start]);
            }
            else if (v[start] == 500)
            {
                if (a > b)
                {
                    b += 500;
                    start++;
                }
                else
                {
                    a += 500;
                    start++;
                }
            }
        }
        cout << a * b << endl;
    }
    return 0;
}
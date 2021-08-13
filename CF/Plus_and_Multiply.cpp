#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll x[10000000];

void search(int a, int i)
{
    ll lo = 0, hi = i - 1;
    ll mid;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        if (x[mid] < a)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (x[lo] == a)
    {
        cout << "Yes" << endl;
    }
    else if (x[hi] == a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    x[0] = 1;
    while (t--)
    {
        ll n, a, b, i = 1, count = 0, c = 0;
        cin >> n >> a >> b;
        while ((x[i - 1] <= n) || (i == 1 ? (x[i] <= n) : (x[i - 2] <= n)))
        {
            count++;
            ll p = i - count;
            x[i] = a * x[p];
            if (x[i] == n)
            {
                cout << "Yes" << endl;
                c = 1;
                break;
            }

            i++;
            x[i] = b + x[p];
            if (x[i] == n)
            {
                cout << "Yes" << endl;
                c = 1;
                break;
                
            }
            i++;
        }
        if (c == 0)
        {
            sort(x, x + i);
            search(n, i);
        }
    }
    return 0;
}
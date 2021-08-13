#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, sum1 = 0, sum2 = 0, sum3 = 0, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        sum1 += a;
        sum2 += b;
        sum3 += c;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
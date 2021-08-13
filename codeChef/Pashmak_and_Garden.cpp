#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if (abs(a1 - a3) == abs(a2 - a4))
    {
        cout << a1 << " " << a4 << " " << a3 << " " << a2 << endl;
    }
    else if (a1 == a3)
    {
        cout << a1 + abs(a2 - a4) << " " << a2 << " " << a3 + abs(a2 - a4) << " " << a4 << endl;
    }
    else if (a2 == a4)
    {
        cout << a1 << " " << a2 + abs(a1 - a3) << " " << a3 << " " << a4 + abs(a1 - a3) << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
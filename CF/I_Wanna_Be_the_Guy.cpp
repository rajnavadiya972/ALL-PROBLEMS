#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, a, b;
    set<int> s;
    cin >> n;
    cin >> a;
    ll a1[a];
    for (int i = 0; i < a; i++)
    {
        cin >> a1[i];
        s.insert(a1[i]);
    }
    cin >> b;
    ll b1[b];
    for (int i = 0; i < b; i++)
    {
        cin >> b1[i];
        s.insert(b1[i]);
    }
    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
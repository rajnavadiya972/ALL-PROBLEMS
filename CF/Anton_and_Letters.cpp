#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char c;
    set<char> m;
    while (cin >> c)
    {
        if (isalpha(c))
        {
            m.insert(c);
        }
    }
    cout << m.size() << endl;
    return 0;
}
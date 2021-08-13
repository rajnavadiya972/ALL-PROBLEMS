#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    for (int j; j < t; j++)
    {
        int a, b;
        cin >> a >> b;
        int m = 0;
        for (int i = 1; i <= b; i++)
        {
            int c = a % i;
            m = max(m, c);
        }
        cout << m << endl;
    }

    return 0;
}
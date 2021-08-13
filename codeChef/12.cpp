#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,o,fans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a=0, b=0, ans = 0;
        fans = 0;
        cin >> a >> b;
        if (a > b)
        {
            ans = a - b;
            if (fans < ans)
            {
                fans = ans;
                o = 1;
            }
        }
        else
        {
            ans = b - a;
            if (fans < ans)
            {
               fans = ans;
                o = 2;
            }
        }
    }
    cout << o << " " << fans;
    return 0;
}
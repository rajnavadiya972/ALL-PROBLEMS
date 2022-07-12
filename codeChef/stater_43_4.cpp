#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, g_a, g_b;
        cin >> a >> b;
        g_a = (a % 5 == 0) ? a / 5 : (a / 5) + 1;
        g_b = (b % 5 == 0) ? b / 5 : (b / 5) + 1;
        cout << g_a - g_b << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, luck = 0, unluck = 0;
    cin >> n;
    if (n != 0)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                luck++;
            }
            else
            {
                unluck++;
            }
        }
        if (luck > unluck)
        {
            cout << "READY FOR BATTLE";
        }
        else
        {
            cout << "NOT READY";
        }
    }
    return 0;
}

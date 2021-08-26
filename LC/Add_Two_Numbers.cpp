#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int ans = 0, count = 0, count1 = 0;
        char a;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                if (count >= 9)
                {
                    break;
                }
                ans = ans * 10 + (s[i] - '0');
                count++;
            }
            else if (s[i] == '-' || s[i] == '+')
            {
                a = s[i];
                count1++;
            }
            else
            {
                break;
            }
        }
        if (a == '-')
        {
            ans *= (-1);
        }
        if (count >= 9 && a == '-')
        {
            ans = -2147483648;
        }
        else if (count >= 9)
        {
            ans = 2147483647;
        }
        if (count1 >= 2)
        {
            ans = 0;
        }

        return ans;
    }
};

int main()
{
    string str = "-91283472332";
    Solution s;
    int ans = s.myAtoi(str);
    cout << ans;
    return 0;
}
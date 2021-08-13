#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> nge(temperatures.size());
        stack<int> s;
        for (int i = 0; i < temperatures.size(); i++)
        {
            while (!s.empty() && temperatures[i] > temperatures[s.top()])
            {
                nge[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        while (!s.empty())
        {
            nge[s.top()] = 0;
            s.pop();
        }

        for (int i = 0; i < temperatures.size() - 1; i++)
        {
            nge[i] = (nge[i] == 0 ? nge[i] : nge[i] - i);
        }
        return nge;
    }
};

int main()
{
    int n;
    cin >> n;
    class Solution s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    v = s.dailyTemperatures(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
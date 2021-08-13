#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> m1;
        map<int, int> m2;
        vector<int> v;
        for (int &x : nums1)
        {
            m1[x]++;
        }
        for (int &x : nums2)
        {
            m2[x]++;
        }
        for (auto &mm1 : m1)
        {
            for (auto &mm2 : m2)
            {
                if ((mm1.first == mm2.first))
                {
                    for (int i = 0; i < min(mm1.second, mm2.second); i++)
                    {
                        v.push_back(mm1.first);
                    }
                }
            }
        }
        return v;
    }
};

int main()
{

    int n1, n2;
    cout << "Enter the size of set1 : ";
    cin >> n1;

    vector<int> v1(n1);

    for (int &x : v1)
    {
        cin >> x;
    }

    cout << "Enter the size of set2 : ";
    cin >> n2;
    vector<int> v2(n2);
    for (int &x : v2)
    {
        cin >> x;
    }

    return 0;
}
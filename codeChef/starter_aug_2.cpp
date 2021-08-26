#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x;
        cin >> n >> m >> x;
        vector<int> v(n);
        vector<int> ans;
        map<int, int> ma;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            ma.insert({v[i], i});
        }
        int count = 1, c = 0;
        map<int, int>::reverse_iterator it;
        for (it = ma.rbegin(); it != ma.rend(); it++)
        {
            if ((*it).first >= m)
            {
                ans.push_back((*it).second);
                count++;
            }
            else if (count <= x)
            {
                ans.push_back((*it).second);
                count++;
            }
            else
            {
                break;
            }
        }

        sort(ans.begin(), ans.end());
        cout << count - 1 << " ";
        for (auto &an : ans)
        {
            cout << an + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
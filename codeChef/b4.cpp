#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void count(string &str, char a, vector<string> &ne)
{
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(a, end)) != string::npos)
    {
        end = str.find(a, start);
        ne.push_back(str.substr(start, end - start));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    const char a = ' ';

    vector<string> ne;
    count(s, a, ne);

    for (auto &s : ne)
    {
        cout << s << endl;
    }
    return 0;
}
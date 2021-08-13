#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,group=0;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        // cout<<s[1]<<s[0]<<endl;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j]==1)
            {
                group=group+1;
            }
        }
        cout<<group<<endl;
    }
    
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        string s;
        cin >> s;
        for (auto &x : s)
        {
            x = toupper(x);
        }
        s.erase(unique(s.begin(), s.end()), s.end());
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]!='M' || s[i]!='E'||s[i]!='O'||s[i]!='W')
        //     {
        //         cout<<"YES"<<endl;
        //         s.erase(s.begin(),s.end());
        //     }
        // }
        cout << (s == "MEOW" ? "YES" : "NO") << endl;
    }

    return 0;
}
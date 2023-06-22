#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define eps 1e-12
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int tc;cin>>tc;
    while(tc--)
    {
        string s,a={"codeforces"};
        cin>>s;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=a[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
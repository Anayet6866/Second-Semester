#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    string s, q;
    int c = 0;
    char p;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            c = 1;
        }
    }
    if(c==0)
    {
        for(int j=0;j<s.size();j++)
        {
            if(islower(s[j]))
            {
                p=toupper(s[j]);
            }
            else
            {
                p=tolower(s[j]);
            }
            cout<<p;
            
        }
    }
    else
    {
        cout<<s;
    }
    //cout<<c<<endl;
    return 0;
}
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
    st s,t;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
            s[i]= tolower(s[i]); 
    }
     //cout<<s;
     for(int i= 0;i<s.size();i++)
     {
        if(s[i]== 'a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            //cout<<" ";
        }
        else
        {
            cout<<"."<<s[i];
        }
     }
    return 0;
}
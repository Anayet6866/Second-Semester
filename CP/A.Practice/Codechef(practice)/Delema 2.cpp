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

    int t;
    cin>>t;
    while(t--)
    {
        llI x,y,a,b;
        cin>>x>>y;
        if(x>=y)
        {
            cout<<"0"<<endl;
        }
        else if(y>x)
        {
            if(y%x==0)
            {
                cout<<y/x-1<<endl;
            }
            else
            {
                cout<<y/x<<endl;
            }
        }
    }
    return 0;
}
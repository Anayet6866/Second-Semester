#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
#define endl cout<<endl
using namespace std;
int main()
{
    vector<int>Arr[10];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int x;cin>>x;
            Arr[i].pb(x);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<Arr[i][j]<<" ";
        }
       endl;
    }
    
    return 0;
}
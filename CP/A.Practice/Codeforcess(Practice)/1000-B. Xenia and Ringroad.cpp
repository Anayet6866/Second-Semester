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
    int n,m;
    long long ans=0;
    cin>>n>>m;
    int a[m+10];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        if(j==0)
        {
            ans+=a[j]-1;
        }
        else if(a[j]>a[j-1])
        {
            ans+=a[j]-a[j-1];
        }
        else if(a[j]<a[j-1])
        {
            ans+=(n-a[j-1])+a[j];
        }
    }
    cout<<ans<<endl;

    return 0;
}
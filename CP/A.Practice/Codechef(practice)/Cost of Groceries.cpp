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
    int t;cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        llI sum=0;
        int a[110],b[110];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>=x)
            {
                sum=sum+b[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}


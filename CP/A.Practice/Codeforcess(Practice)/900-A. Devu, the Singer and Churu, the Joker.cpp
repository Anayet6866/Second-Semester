#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
using namespace std;
void solve()
{
    int n,d,sum=0;
    cin>>n>>d;
    int a[n+10];
    for( int j=0;j<n;j++)
    {
        cin>>a[j];
        sum+=a[j];
    }
    int x= (n-1)*10;
    if(sum+x>d)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<(d-sum)/5<<endl;
    }
}
int main()
{
    solve();
    return 0;
}
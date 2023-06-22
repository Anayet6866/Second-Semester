#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define eps 1e-12
#define NL cout<<endl;
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
using namespace std;
int main()
{
    LOL;
    int n,f=0,q;cin>>n>>q;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a.pb(x);
    }
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    NL;
    int l=0,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==q)
        {
            f=1;
            break;
        }
        else if(a[m]>q)
        {
            r=m-1;
        }
        else if(a[m]<q)
        {
            l=m+1;
        }

    }
    if(f)
    YES;
    else 
    NO;
    return 0;
}
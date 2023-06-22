#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
#define end cout<<endl
using namespace std;
int main()
{
    int a,b,c=0,sum=0;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=(a+c)-b;
        if(sum<0)
        c=0;
        else
        c=sum;
    }
    cout<<sum<<endl;
    return 0;
}
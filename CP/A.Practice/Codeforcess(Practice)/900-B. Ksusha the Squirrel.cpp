#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
using namespace std;
int main()
{
    int n,k,c=0,p=0;
    
    cin>>n>>k;
    char s[n+1];
    for(int i=0;i<n;i++)
    {
       cin>>s[i];
       if(s[i]=='#')
       c++;
       else if(s[i]=='.')
       p++;
    }
    if(c>k)
    NO;
    else
    YES;
    cout<<c<<endl;
    cout<<p<<endl;
    return 0;
}
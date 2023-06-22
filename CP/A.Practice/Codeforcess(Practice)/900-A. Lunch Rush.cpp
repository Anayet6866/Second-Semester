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
    int n,k,f,t,max=-2147483648,temp=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>f>>t;
        if(t>k)
        {
            temp=f-(t-k);
        }
        else
        {
            temp=f;
        }
        if(temp>max)
        {
            max=temp;
        }
    }
    cout<<max;
    
    return 0;
}
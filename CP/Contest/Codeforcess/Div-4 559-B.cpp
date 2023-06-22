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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m=0,b=0;
        int x;cin>>x;
        int a[110];
        for(int j=0;j<x;j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
            {
                m+=a[j];
            }
            else
            {
                b+=a[j];
            }
        }
        if(m>b)
        {
            YES;
        }
        else
        {
            NO;
        }
    }   
    return 0;
}
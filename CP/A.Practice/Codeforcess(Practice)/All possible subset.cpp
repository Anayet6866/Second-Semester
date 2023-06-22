#include<bits/stdc++.h>
#define I int
#define llI long long int
#define YES cout<<"YES"<<endl
#define NO cout <<"NO"<<endl
#define st string
using namespace std;
int main()
{
    int n ,a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int mask=1;mask<(1<<n);mask++)
    {
        for(int i=0;i<n;i++)
        {
            if(mask & (1<<i))
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
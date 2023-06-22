#include<bits/stdc++.h>
#define I int
#define llI long long int
#define YES cout<<"YES"<<endl
#define NO cout <<"NO"<<endl
using namespace std;
int main()
{
    I n,m,sum=0,h=0;
    cin>>n>>m;
    for(I i=1;m*i<=n;i++)
    {
        n++;
    }
    cout<<n<<endl;
    // cin>>n>>m;
    // I y =(n/m);
    // h=y;
    // for(I i=0;1;i++)
    // {
    //      h=(h/m);
    //     if(h==0)
    //     {
    //         break;
            
    //     }
    //     else
    //     {
    //         sum+=h;
    //     }    
    // }
    // I p=n+y+sum;
    // I q=(p%m);
    // if(q==0)
    // {
    //     cout<<p+1<<endl;
    // }
    // else{
    //     cout<<p<<endl;
    // }
    return 0;
}
#include<bits/stdc++.h>
#define I int
#define llI long long int
#define YES cout<<"YES"<<endl
#define NO cout <<"NO"<<endl
#define st string
using namespace std;
int main()
{
    I p=0,q=0,x=0,n;
    st s;
    cin>>n;
    cin>>s;
    for(I i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
             p++;
        }
        else
        {
            q++;
        }
    }
    x= abs((p-q));
   // cout<<p<<" "<<q<<endl;
    cout<<x<<endl;
    return 0;
}
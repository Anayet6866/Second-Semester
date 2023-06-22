#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, fact=1;
        cin>>n;
        if(n==0 || n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            for(int j=2;j<=n;j++)
            {
                fact=fact*j;
            }
            cout<<fact<<endl;
        }
    }
    return 0;
}
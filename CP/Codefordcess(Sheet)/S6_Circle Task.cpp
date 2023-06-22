#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int X,Y,R,N,x,y,m,n;
    cin>>X>>Y>>R>>N;
    for(int i=0;i<N;i++)
    {
        cin>>x>>y;
        m=(x-X);
        n=(y-Y);
        if(m*m+n*n<=R*R)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

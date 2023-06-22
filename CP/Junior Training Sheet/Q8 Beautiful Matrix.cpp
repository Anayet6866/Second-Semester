#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[11][10],x=0,y=0,result=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    result = abs(2-x)+abs(2-y);
    cout<<result;
}

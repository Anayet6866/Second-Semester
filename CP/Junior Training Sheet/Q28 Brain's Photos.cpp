#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,f=0;
    char a[101][101];
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='M' ||a[i][j]=='Y'|| a[i][j]=='C')
            {
                f=1;
            }
        }
    }
    if(f==1)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;
}
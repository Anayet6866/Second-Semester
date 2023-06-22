#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f[101][101],s[101][101],r1,c1,r2,c2,sum=0;
    long long result[101][101];
    //First Matrix:
    cin>>r1>>c1;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>f[i][j];
        }
    }
    //second Matrix:
    cin>>r2>>c2;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>s[i][j];
        }
    }
    //Multiplication Of First & Second Matrix:
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                sum=sum+f[i][k]*s[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    //Result:
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

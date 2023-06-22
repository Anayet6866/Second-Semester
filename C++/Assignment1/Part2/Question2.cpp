#include<iostream>
using namespace std;
void Max_Min()
{
    int x;
    cin>>x;
    int i,j,mi,ma,a[x];
    for(i=0;i<x;i++)
    {
        cin>>a[i];
        mi=a[0];
        ma=a[0];
    }
    for(j=0;j<x;j++)
    {
        if(a[j]>ma)
        {
            ma=a[j];
        }
        else
        {
            ma=ma;
        }
        if(a[j]<mi)
        {
            mi=a[j];
        }
        else
        {
            mi=mi;
        }
    }
    cout<<mi<<" "<<ma;
}
int main()
{
    Max_Min();
    return 0;
}

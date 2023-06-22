#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[1000001];
    int i,x,sum=0;
    cout<<"Enter your sentece:";
    cin>>a;
    x=strlen(a);
    //cout<<x;
    for(i=0;i<x;i++)
    {
        sum=sum+a[i]-48;
    }
    cout<<sum;
    return 0;
}

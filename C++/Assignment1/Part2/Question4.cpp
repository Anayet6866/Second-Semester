#include<iostream>
using namespace std;
void Print()
{
    int i,x;
    cin>>x;
    for(i=1;i<=x;i++)
    {
       cout<<i;
       if(i!=x)
       {
           cout<<" ";
       }
    }
}
int main()
{
    Print();
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int i,x,first=0,second=1,fib=0;
    cout<<"Enter the number:";
    cin >>x;
    for(i=0; i<x; i++)
    {
        if(i==0 || i==1)
        {
            fib=i;
        }
        else
        {
            fib=first+second;
            first=second;
            second=fib;
        }
        cout<<fib;
        cout<<" ";
    }
    return 0;
}

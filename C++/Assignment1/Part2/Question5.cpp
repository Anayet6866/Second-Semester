#include<iostream>
using namespace std;
int Add(int x,int y)
{
    int a;
    a=x+y;
    return a;
}
int main()
{
    int x,y,b;
    cout<<"Enter two number:";
    cin>>x>>y;
    b=Add(x,y);
    cout<<b;
    return 0;
}

#include<iostream>
using namespace std;

void print(int x)
{
    if(x==0)
    {
        return;
    }
    else
    {
        cout<<x<<endl;
        print(x-1);
    }
}
int main()
{
    int x;
    cin>>x;
    print(x);
    return 0;
}

#include<iostream>
using namespace std;

long long int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}
int main()
{
    int x;
    long long int result;
    cin>>x;
    result=factorial(x);
    cout<<result;
    return 0;
}

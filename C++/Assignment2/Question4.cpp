#include<iostream>
using namespace std;
int ADD(int n,int a[])
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return a[0]+ADD(n-1,a+1);
    }
}
int main()
{
    int i,n,a[1000],sum=0;
    cout<<"Enter the length of array: ";
    cin>>n;
    cout<<"Enter the element of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sum=ADD(n,a);
    cout<<"Sum of Array is:"<<sum<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int i,x,remainder,binary=0,product=1;
    cin>>x;
    while(x!=0)
    {
        remainder=x%2;
        binary=binary+(remainder*product);
        x=x/2;
        product=product*10;
    }
    cout<<binary;
    return 0;
}

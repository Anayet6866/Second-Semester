#include<bits/stdc++.h>
#include<algorithm>>
#include<numeric>
using namespace std;

int _gcd(int a,int b)
{
    if(b==0)return a;
    else return _gcd(b,a%b);
}


int _lcm(int a,int b)
{
    return a*b/_gcd(a,b);
}


int main()
{
    int m,n,x,y;
    cin>>m>>n;
    x=_gcd(m,n);
    y=_lcm(m,n);
    cout<<x<<" "<<y<<endl;
//    cout<<"GCD of "<<m<<" "<<n<<" "<<"is "<<x<<endl;
//    cout<<"LCM of "<<m<<" "<<n<<" "<<"is "<<y<<endl;
    return 0;
}


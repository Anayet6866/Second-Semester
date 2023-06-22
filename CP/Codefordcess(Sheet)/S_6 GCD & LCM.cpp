#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int a,b;
 cin>>a>>b;
 long long int m,n,p;
 //m=log2(a);
 //n=log2(b);
 //p=m+n;
 long long int x;
 x=__gcd(a,b);
 long long int lcm=(a*b)/x;
 cout<<x<<" "<<lcm;
return 0;
}
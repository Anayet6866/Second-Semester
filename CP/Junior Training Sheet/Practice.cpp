#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    double x;
    int y;
    cin>>n;
    x=log2(n)/log2(2);
    y=log2(n)/log2(2);
    if(x==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    // cout<<x<<endl<<y<<endl<<x-y;
    return 0;

}

#include<bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout<<"YES"<<endl
#define NO cout <<"NO"<<endl
#define st string
#define vi vector<int>
#define pb push_back
using namespace std;
int main()
{
    int x,y,n;
    cin>>x>>y>>n;
   // cout<<((x+y)/2)/y;
   // cout<<((x-y)/2)/y;
    int m=(x+y)%n;
    int p=(x%n)+(y%n);
    cout<<m<<" "<<p<<endl;
    return 0;
}
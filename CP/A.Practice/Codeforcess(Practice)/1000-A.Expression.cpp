#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define eps 1e-12
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int a,b,c;cin>>a>>b>>c;
    int A,B,C,D,E;
    A=a+(b*c);
    B=a*(b+c);
    C=a*b*c;
    D=(a+b)*c;
    E=a+b+c;
    vector<int>v,vr;
    for(int i=0;i<5;i++)
    {
        if(i==0)
        {
            v.pb(A);
        }
        if(i==1)
        v.pb(B);
        if(i==2)
        v.pb(C);
        if(i==3)
        v.pb(D);
        if(i==4)
        v.pb(E);
       /// cout<<v[i]<<endl;
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    return 0;
}
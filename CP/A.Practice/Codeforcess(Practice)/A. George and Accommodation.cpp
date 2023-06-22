#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
using namespace std;
int main()
{
    int a,b,c=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b>a && b-a>=2)
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
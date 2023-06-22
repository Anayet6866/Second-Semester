#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, d,p=0;
    long long int sum=0;
    char c;
    cin >> n >> x;
    sum = x;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> d;
        if (c == '+')
        {
            sum = sum + d;
        }
        else if(c=='-' && sum>=d)
        {
            sum=sum-d;
        }
        else if(c=='-' && sum<d)
        {
            // cout<<"YES"<<endl;
            p++;
        }
    }
    cout<<sum<<" "<<p<<endl;
    return 0;
}
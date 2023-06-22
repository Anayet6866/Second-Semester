#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    for(int i=1;;i++)
    {
        if(i>N)
        {
            cout<<i-1;
            return 0;
        }
        else
        {
            N=N-i;
        }
    }
}

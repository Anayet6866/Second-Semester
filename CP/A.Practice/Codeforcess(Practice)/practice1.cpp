/// Find (n-1)!;
#include <bits/stdc++.h>
using namespace std;
long long int Found(int n)
{
    long long int fact = 1;
    for (int i = 1; i <= (n - 1); i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    long long int X;
    int n;
    cin >> n;
    X = Found(n);
    if((X+1)%n==0)
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
    }
    cout << X << endl;
    return 0;
}
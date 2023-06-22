#include <bits/stdc++.h>
using namespace std;
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define eps 1e-12
#define NL cout<<endl
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int compareDouble(double a, double b)
{
    if(abs(a-b)<=eps)
    return 0;
    else
    return a<b?-1:1;
}

int main()
{
    LOL;
    queue<int>q,q1;
    q.push(1);
    q.push(2);
    q.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q.swap(q1);
    while(!q.empty())
    {
        cout<<q.front();
        q.pop();
    }
    NL;
    cout<<q.size();
    return 0;
}
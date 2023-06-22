#include <bits/stdc++.h>
using namespace std;
#define ULLI unsigned long long int
#define LLI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define ST string
#define PB push_back
#define PI 2 * acos(0)
#define EPS 1e-12
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
    if(abs(a-b)<=EPS)
    return 0;
    else
    return a<b?-1:1;
}
void seive(int n)
{
    bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for (int i = 2; i * i <= n; i++) {
		if (prime[i] == true) {
			for (int j = i * i; j <= n; j += i)
				prime[j] = false;
		}
	}
	// for (int i = 2; i <= n; i++)
	// 	if (prime[i])
	// 		cout << i << " ";
}
int main()
{
    LOL;
    
    return 0;
}
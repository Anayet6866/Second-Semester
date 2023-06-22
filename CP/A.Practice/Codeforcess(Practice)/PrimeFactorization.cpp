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
#define NL cout << endl
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int compareDouble(double a, double b)
{
    if (abs(a - b) <= eps)
        return 0;
    else
        return a < b ? -1 : 1;
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
    int n;
    cin >> n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt;
        }
    }
    if(n>1)
    {
        cout<<n<<"^"<<"1";
    }
    else
    NL;
    return 0;
}
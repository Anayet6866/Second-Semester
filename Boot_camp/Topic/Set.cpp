#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2*acos(0)
#define end cout<<endl
using namespace std;
int main()
{
    // Set is a container of STL.Which has only key.Set is print the key
    // ordered list.But set has three type.
    // 1.Ordered set.TC->O(log(N));-> Print listed order
    // 2.Unordered_set . TC->(O(1));-> Print Unordered listed order
    // 3.Multi_set . TC->(O(log(N)));-> Print(All) listed order   
    set<char>s;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        s.insert(x);
    } 
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    return 0;
}
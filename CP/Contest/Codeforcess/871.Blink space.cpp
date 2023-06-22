#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int  n, c = 0,ans=0;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]==0)
            {
                c++;
                ans = max(ans,c);
            }
            else
            {
                c=0;
            }
        }
        cout<<ans<<endl; 
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    long long int sum = 0;
    cin >> n;
    int a[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<sum<<endl;
    sort(a, a + n);
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum - a[i];
            if (sum % 2 == 0)
            {
                cout << sum << endl;
                break;
            }
        }
    }

    return 0;
}
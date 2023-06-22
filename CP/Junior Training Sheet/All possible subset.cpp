#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a,a+n);//whith sort and without sort code has been worked:
    for(int msk=1;msk<1<<n;msk++)
    {
        for(int i=0;i<n;i++)
        {
            if(msk & 1<<i)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
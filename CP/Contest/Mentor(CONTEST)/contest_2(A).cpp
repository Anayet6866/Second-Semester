
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,sum1=0;
    cin>>n;
    vector<int>v;

    //int v[2*n];
    for(int i=0; i<2*n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
//    for(int i=0; i<2*n; i++)
//    {
//        cout<<v[i]<<" ";
//    }
//    cout<<endl;

    sort(v.begin(),v.end());
    for(int j=0; j<n; j++)
    {
        sum+=v[j];
    }
    for(int j=n; j<2*n; j++)
    {
        sum1+=v[j];
    }
//    cout<<sum<<endl;
//    cout<<sum1<<endl;
    if(sum==sum1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=0;i<2*n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
        return 0;
}

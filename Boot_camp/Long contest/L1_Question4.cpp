#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    int p;
    p= unique(v.begin(),v.end())-v.begin();
    cout<<p<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v,v2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    cin>>m;
    v.erase(v.begin()+m-1);
//    for(int i=0;i<n-1;i++)
//    {
//        cout<<v[i]<<" ";
//    }
//    cout<<endl;
    int p,q;
    cin>>p>>q;

    v.erase(v.begin()+ p-1,v.begin()+ q-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}

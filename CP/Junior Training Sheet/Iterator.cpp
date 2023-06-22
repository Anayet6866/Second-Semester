
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    vector<int>a,v;
    vector<int>::iterator it;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    it=find(a.begin(),a.end(),5);
    if(it!=a.end())
    {
        cout<<"Found"<<endl;
    }
    cout<<it-a.begin()<<endl;
//    sort(a.begin(),a.end());
//    reverse(a.begin(),a.end());
//    for(it=a.begin();it!=a.end();it++)
//    {
//        cout<<*it<<" ";
//    }
}

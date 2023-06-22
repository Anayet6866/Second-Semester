#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
       
    }
     c = max_element(v.begin(),v.end())-v.begin();
    cout<<c<<endl;
    return 0;

}
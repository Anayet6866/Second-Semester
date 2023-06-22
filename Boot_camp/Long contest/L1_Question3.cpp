#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for(int k=1; k<=m; k++)
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
        int p=unique(v.begin(),v.end())-v.begin();
        //cout<<p<<endl;
        if(p==n)
        {
            cout<<"prekrasnyy"<<endl;
        }
        else
        {
            cout<<"ne krasivo"<<endl;
        }
    }
    return 0;

}

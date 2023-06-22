#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="abcdefghijklmnopqrstuvwxyz";
    string str1={};
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        str1=str1+str[i%k];
        //cout<<str[i%k]<<" ";
    }
    cout<<endl<<str1<<endl;
    return 0;
}

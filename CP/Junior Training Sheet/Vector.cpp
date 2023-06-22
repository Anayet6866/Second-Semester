#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    vector<int>arr;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    for(i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sort(arr.begin(),arr.end());
    //reverse(arr.begin(),arr.end());
    //arr.erase(arr.begin(),arr.begin()+arr.size());
    arr.pop_back();
    for(i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


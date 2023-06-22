#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,p=0;
    string a,s;
    cin>>a>>s;
    j=0;
   for(i=0;i<s.size();i++)
   {
       for(j=j;j<=a.size();j)
       {
           if(s[i]==a[j])
           {
               p++;
               j++;
               break;
           }
           break;
       }
   }
    cout<<p+1<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,p=0,w,l;
    string s;
    char c,temp;
    cin>>s;
    //l=s.size();
    for(i=0; i<s.size(); i++)
    {
        for(j=i+1; j<s.size(); j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;

            }

        }
        //cout<<s[i];
    }
//    p=0;
//    for(k=0; k<s.size(); k++)
//    {
//        if(s[k]==s[k+1])
//        {
//            p++;
//        }
//    }
//    cout<<p<<endl;
//    w=l-p;
//cout<<endl;
      c=s[0];
    for(k=0; k<s.size(); k++)
    {
        if(s[k]!=c)
        {
            p++;
            c=s[k];
        }
    }
    p++;
    //cout<<p<<endl;
    if(p%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else if(p%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}

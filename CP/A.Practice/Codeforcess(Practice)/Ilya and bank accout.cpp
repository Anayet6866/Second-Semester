#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
       int ldg,lsdg;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else if(n>-10)
    {
        cout<<"0"<<endl;
    }
    else{
        int ldg = abs(n) % 10;
        int lsdg = abs(n) /10%10;
        cout<<ldg<<endl<<lsdg<<endl;
        if(ldg>lsdg)
        {
           // cout<<"YES"<<endl;
            cout<<n/10<<endl;
        }
        else if(ldg<=lsdg){
            int x;
            x= (n/100)*10-ldg;
            cout<<x<<endl;
        }
    }
 
    
    return 0;
}
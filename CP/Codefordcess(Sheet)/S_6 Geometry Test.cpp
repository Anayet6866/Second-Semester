#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int R,S,A,B;
    cin>>R>>S;
    A=2*R;
    B=sqrt(2)*S;
    if(S>=A)
    {
        cout<<"Square"<<endl;
    }
    else if(B<=A)
    {
        cout<<"Circle"<<endl;
    }
    else
    {
        cout<<"Complex"<<endl;
    }
    return 0;
}

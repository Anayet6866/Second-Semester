#include <bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        int a, b;
        cin >> a >> b;
        double s = ((double)a / b);
        if(b==0)
        {
            throw -1;
        }
        cout<<s<<endl;
    }
    catch(...)
    {
        cout<<"Number is not divisable by 0\nPlease try again.";
    }
    return 0;
}
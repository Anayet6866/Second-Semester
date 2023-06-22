#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, c = 0, p = 0, f = 0,t=0,q=0;
    string s;
    string m[13] = {" ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cin >> s;
    cin >> n;
    t=n%12;
    for (int i = 0; i < 13; i++)
    {
        if (s == m[i])
        {
            p = i;
            break;
        }
    }
    cout << p << endl;
    f=p+t;
    if (f <= 12)
    {
        cout << m[f] << endl;
    }
    else if (f > 12)
    {
        f = f % 12;
        cout << m[f] << endl;
    }

    //cout<<m[p+t]<<endl;
    return 0;
}
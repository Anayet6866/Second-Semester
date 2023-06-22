#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[110], b[110], s[110], n, p;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s[i] = i;
    }
    cin >> p;
    for (int i= 0; i <p; i++)
    {
        cin >> a[i];
        s[a[i]] = 0;
    }
    int q;
    cin >> q;
    for (int j = 0; j < q; j++)
    {
        cin >> b[j];
        s[b[j]] = 0;
    }
    int c=0;
    for (int k = 1; k <= n; k++)
    {
        if(s[k]==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else 
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
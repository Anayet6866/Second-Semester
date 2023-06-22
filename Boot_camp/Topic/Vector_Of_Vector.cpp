#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define endl cout<<endl
using namespace std;
int main()
{
    vector<vector<int>> vc;
    for (int i = 0; i < 3; i++)
    {
        vector<int> temp; // temporary vector created;which is
                          // push the vector into the main vector;

        for (int j = 0; j <3 ;j++)
        {
            int x;
            cin >> x;
            temp.pb(x);
        }
        vc.pb(temp);  //push the value into main vector;
    }
    for(int i=0;i<vc.size();i++)
    {
        for(int j=0;j<vc[i].size();j++)
        {
            cout<<vc[i][j]<<" ";
        }
        endl;
    }
    return 0;
}
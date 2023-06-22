#include <bits/stdc++.h>
#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
#define pi 2 * acos(0)
#define eps 1e-12
#define LOL                            \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)
using namespace std;
int main()
{
    LOL;
    int n,c;
    vector<char> v;
    char s[9][9];
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> s[i][j];
            }
        }
        // for (int i = 0; i < 8; i++)
        // {
        //     for (int j = 0; j < 8; j++)
        //     {
        //         cout << s[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
       
        for (int k = 0; k < 8; k++)
        {
              c=0;
            for (int l = 0; l < 8; l++)
            {
                if (s[k][l] == 'R')
                {
                    c++;
                    if (c == 8)
                    {
                         break;
                    }
                       
                }
            }
            
        }
         cout << c << endl;
        // cout<<"YES"<<endl;
        if(c==8)
        {
            cout<<"R"<<endl;
        }
        else
        {
            cout<<"Blue"<<endl;
        }
    }

    return 0;
}
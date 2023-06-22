#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long int t;
        cin >> t;
        while (t--)
        {
           long long int n;
            cin >> n;
            long long int flag = 0;
            if (n == 2)
                cout << "yes" << endl;
            else if(n==1)
                cout<<"no"<<endl;

            else
            {
                for (int  i = 2; i * i <= n; i++)
                {
                    if (n % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    cout << "no" << endl;

                else
                    cout << "yes" << endl;
            }
        }
    return 0;
}
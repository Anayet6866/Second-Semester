#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum = 0;
    string s, s1 = "Tetrahedron", s2 = "Cube", s3 = "Octahedron", s4 = "Dodecahedron", s5 = "Icosahedron";
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> s;
        if (s == s1)
        {
            sum = sum + 4;
        }
        else if (s == s2)
        {
            sum = sum + 6;
        }
        else if (s == s3)
        {
            sum = sum + 8;
        }
        else if (s == s4)
        {
            sum = sum + 12;
        }
        else if (s == s5)
        {
            sum = sum + 20;
        }
    }
    cout << sum << endl;

    return 0;
}
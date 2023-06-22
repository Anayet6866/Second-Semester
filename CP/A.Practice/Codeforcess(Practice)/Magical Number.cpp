#define UllI unsigned long long int
#define llI long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define st string
#define pb push_back
using namespace std;
int main()
{
    st s;
    int f = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.find("444") != s.npos)
        {
            f = 1;
        }
        if (s[i]!='1'&& s[i]!='4')
        {
            f=1;
        }
        if(s[0]=='4')
        {
            f=1;
        }
    }
    if(f==0)
    YES;
    else 
    NO;
    return 0;
}
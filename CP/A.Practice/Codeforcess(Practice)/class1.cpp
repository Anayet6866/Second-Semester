#include<bits/stdc++.h>
using namespace std;
class Anayet
{
    public:
    string name,id;
    friend void getdata(Anayet &s);
    friend void showdata(Anayet s);
};
 void getdata(Anayet &s)
{
    cin>>s.name;
    cin>>s.id;
}
 void showdata(Anayet s)
{
    cout<<s.name<<endl;
    cout<<s.id<<endl;
}
int main()
{
    Anayet s;
    getdata(s);
    showdata(s);
    return 0;

}
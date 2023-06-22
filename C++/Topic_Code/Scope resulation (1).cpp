#include<bits/stdc++.h>
using namespace std;
class Anayet
{
    public:
    string name,id;
    void getdata();
    void showdata();
};
void Anayet :: getdata()
{
    cin>>name;
    cin>>id;
}
void Anayet :: showdata()
{
    cout<<name<<endl;
    cout<<id<<endl;
}
int main()
{
    Anayet s;
    s.getdata();
    s.showdata();
    return 0;

}
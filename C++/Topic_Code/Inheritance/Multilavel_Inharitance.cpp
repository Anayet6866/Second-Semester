#include<bits/stdc++.h>
using namespace std;
class A
{
    string name;
    public:
    void get()
    {
        cin>>name;
    }
    void show()
    {
        cout<<name<<endl;
    }
};
class B:public A
{
    string address;
    public:
    void get_b()
    {
        cin>>address;
    }
    void show_b()
    {
        cout<<address<<endl;
    }
};
class C : public A
{
    string id;
    public:
    void get_c()
    {
        cin>>id;
    }
    void show_c()
    {
        cout<<id<<endl;
    }
    
};
int main()
{
    C obj;
    obj.get();
    obj.show();

    obj.get_c();
    obj.show();
    obj.show_c();
    return 0;

}
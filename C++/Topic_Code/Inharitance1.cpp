#include<bits/stdc++.h>
using namespace std;
//parent class
class myhouse
{
    public:
    string name="Anayet Ullah";
};
//child class 
class parent : public myhouse
{
    public:
   string  p_name="Farid Uddin";
};
//multilavel class
class All : public parent
{
    public:
};
int main()
{
    All obj;
    cout<<obj.name<<endl<<obj.p_name<<endl;
    return 0;
}
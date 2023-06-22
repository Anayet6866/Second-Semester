#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name,id,sec;
    int arr[20];
    void getValue();
    friend void showData();
};
void student::getValue()
{
    getline(cin,name);
    getline(cin>>ws,id);
    getline(cin>>ws,sec);
}
 void showData(student s)
{
    cout<<s.name<<endl;
    cout<<s.id<<endl;
    cout<<s.sec<<endl;
}
int main()
{
    class student s;
    s.getValue();
    showData(s);
    return 0;
}

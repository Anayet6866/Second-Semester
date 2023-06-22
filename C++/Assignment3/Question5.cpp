///Write a C++ program to print the details of a student. There will be some
///public data as "name", "id", "section". At first, you should assign the
///values for this variables. And then access the values of the variables
///using a friend function.

#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name,id,sec;
    friend void getData(student &s);
    friend void showData(student s);
};

  void getData(student &s)
{
    getline(cin,s.name);
    getline(cin>>ws,s.id);
    getline(cin>>ws,s.sec);
}
  void showData(student s)
{

    cout<<s.name<<endl;
    cout<<s.id<<endl;
    cout<<s.sec<<endl;
}
int main()
{
    student s;
    getData(s);
    showData(s);
    return 0;
}

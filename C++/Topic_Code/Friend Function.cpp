// In object-oriented programming, a friend function is a function 
// that is not a member of a class, but has access to the private 
// and protected members of that class as if it were a member of 
// the class. A friend function is declared using the friend keyword 
// inside the class declaration.
// Friend functions are often used when a function needs to access 
// private or protected data of a class but cannot be implemented as 
// a member function of the class. For example, a class may have a 
// private data member that needs to be accessed by a non-member 
// unction for a specific operation, and this non-member function 
// can be declared as a friend function of the class.

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
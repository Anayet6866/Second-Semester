#include<iostream>
using namespace std;
class Student
{
public:
    string id,name,sec,sem,dep,uni;
    void TakeStudentDetails()
    {
        getline(cin,name);
        getline(cin,id);
        getline(cin,sec);
        getline(cin,sem);
        getline(cin,dep);
        getline(cin,uni);

    }
    void PrintStudentDetails()
    {
                cout<<"Enter your name:"<<endl;
        getline(cin,name);
        cout<<"Enter your id:"<<endl;
        getline(cin,id);
        cout<<"Enter your section:"<<endl;
        getline(cin,sec);
        cout<<"Enter your semester:"<<endl;
        getline(cin,sem);
        cout<<"Enter your department:"<<endl;
        getline(cin,dep);
        cout<<"Enter your University:"<<endl;
        getline(cin,uni);
    }
};
int main()
{
    Student Anayet;
    Anayet.TakeStudentDetails();
    Anayet.PrintStudentDetails();
    return 0;
}

#include<iostream>
using namespace std;
class Student
{
public:
    string id,name,sec,sem,dep,uni;
    void TakeStudentDetails()
    {
        cout<<"Enter your name:"<<endl;
        getline(cin>>ws,name);
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
    void PrintStudentDetails()
    {

        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Section: "<<sec<<endl;
        cout<<"Semester: "<<sem<<endl;
        cout<<"Department: "<<dep<<endl;
        cout<<"University: "<<uni<<endl;
    }
};
int main()
{
    Student Anayet;
    int n,i;
    cout<<"How many students information do you entry?"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        Anayet.TakeStudentDetails();
        Anayet.PrintStudentDetails();

    }
    return 0;
}


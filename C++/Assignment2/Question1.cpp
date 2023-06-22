#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public:

    string id,name,semester,section,department,university;
};
int main()
{
    Student Anayet;
    Anayet.name="Anayet Ullah";
    Anayet.id="C223133";
    Anayet.semester="Second";
    Anayet.section="2DM";
    Anayet.department="Computer Science And Engineering";
    Anayet.university="International Islamic University  Chittagong";
    cout<<Anayet.name<<endl;
    cout<<Anayet.id<<endl;
    cout<<Anayet.semester<<endl;
    cout<<Anayet.section<<endl;
    cout<<Anayet.department<<endl;
    cout<<Anayet.university<<endl;
    getch();
}

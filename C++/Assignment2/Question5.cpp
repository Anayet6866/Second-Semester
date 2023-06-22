#include<iostream>
using namespace std;
int i;
class Company
{
public:
    string name,add;
    int reg_id,total_Staff,salary[10];
    void InputCompanyDetails()
    {

        cout<<"Enter Name:"<<endl;
        getline(cin>>ws,name);
        cout<<"Enter Address:"<<endl;
        getline(cin,add);
        cout<<"Enter Registration id:"<<endl;
        cin>>reg_id;
        cout<<"Enter Total Staff:"<<endl;
        cin>>total_Staff;
        cout<<"Enter 5 Person Salary:"<<endl;
        for(i=0; i<5; i++)
        {
            cin>>salary[i];
        }
    }
    void ShowComapnyDetails()
    {

        cout<<"Name:";
        cout<<name<<endl;
        cout<<"Address:";
        cout<<add<<endl;
        cout<<"Regestration ID:";
        cout<<reg_id<<endl;
        cout<<"Total Staff:";
        cout<<total_Staff<<endl;
        cout<<"Salary:";
        for(i=0; i<5; i++)
        {
            cout<<salary[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Company IIUC;
    int n,j;
    cout<<"How many members information do you entry?"<<endl;
    cin>>n;
    for(j=1; j<=n; j++)
    {
        IIUC.InputCompanyDetails();
        IIUC.ShowComapnyDetails();
    }

    return 0;
}


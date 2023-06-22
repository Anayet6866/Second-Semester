
///Write a program to print the user details by creating a class named
///"Facebook". For each object of Facebook there should be some
///public data, which are "user_name", "full_name", "friends", "about",
///"institution", "lives_in" and some private data which are "password",
///"email", "phone", "gender", "birth_year". There should be two functions.
/// One function will take all the data from user as input.
/// And another function will show all the data related to the object as
/// output. Give the function name as you want.

#include<bits/stdc++.h>
using namespace std;
class Facebook
{
private:
    string password,email,gender,birth_year;
    int phone;
public:
    string user_name,full_name, about,institution,lives_in;
    int friends;
    void getData();
    void showData();
};
void Facebook :: getData()
{
//    string password,email,gender,birth_year;
//    int phone;

    getline(cin,user_name);
    getline(cin>>ws,full_name);
    cin>>friends;
    getline(cin>>ws,about);
    getline(cin>>ws,institution);
    getline(cin>>ws,lives_in);

    getline(cin>>ws,password);
    getline(cin>>ws,email);
    cin>>phone;
    getline(cin>>ws,gender);
    getline(cin>>ws,birth_year);
}
void Facebook::showData()
{
    cout<<user_name<<endl;
    cout<<full_name<<endl;
    cout<<friends<<endl;
    cout<<about<<endl;
    cout<<institution<<endl;
    cout<<lives_in<<endl;
    cout<<password<<endl;
    cout<<email<<endl;
    cout<<phone<<endl;
    cout<<gender<<endl;
    cout<<birth_year<<endl;
}
int main()

{
    Facebook s;
    s.getData();
    s.showData();
    return 0;

}

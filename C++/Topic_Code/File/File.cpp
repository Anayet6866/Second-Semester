#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    ofstream infile;
    infile.open("DB.txt");
    cin>>name;
    infile<<name<<endl;
    infile.close();

    
    ifstream outfile;
    outfile.open("DB.txt");
    outfile>>name;
    cout<<name;
    outfile.close();
    return 0;
}
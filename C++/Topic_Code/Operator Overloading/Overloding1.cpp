#include<bits/stdc++.h>
using namespace std;
class A
{
    int a,b;
    public:
    A(){cout<<"Operator OVerloading"<<endl;};
    A(int x, int y)
    {
        a=x;
        b=y;
    }
    A friend operator - (A obj,A obj2);
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
A operator - (A obj,A obj2)
{
    A temp;
    temp.a = obj.a - obj2.a;
    temp.b = obj.b - obj2.b; 
    return temp;
}
int main()
{
    A obj(30,10),obj2(10,5),ans;
    ans = obj - obj2;
    ans.print();
    return 0;
}

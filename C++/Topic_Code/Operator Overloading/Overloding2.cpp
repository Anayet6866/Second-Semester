#include<bits/stdc++.h>
using namespace std;
class A
{
    int a,b;
    public:
    A(){};
    A (int x,int y)
    {
         a=x;
         b=y;
    }
    A friend operator - (A obj1, int n);
    void print ()
    {
        cout<<a<<" "<<b;
    }
};
A operator - (A obj1,int n)
{
    A temp;
    temp.a = obj1.a-n;
    temp.b = obj1.b-n;
    return temp;
}
int main()
{
    //obj2=obj1+20;
    A obj1(20,30),ans;
    ans = obj1-20;
    ans.print();


    return 0;
}
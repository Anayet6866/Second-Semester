#include<bits/stdc++.h>
using namespace std;
class A
{
    float a,b;
    public:
    A(){};
    //A(){cout<<"Problem Solve.";};
    A(float x,float y)
    {
        a=x;
        b=y;
    }
    A friend operator +(A obj,A obj1);
    void show()
    {
        cout<<a<<endl<<b<<endl;
    }
};
A operator +(A obj,A obj1)
{
    A temp;
    temp.a= obj.a + obj1.a;
    temp.b= obj.b + obj1.b;
    return temp;
}
int main()
{
    A obj(3.5,4.5),obj1(5.5,6.5),ans;
    ans=obj+obj1;
    ans.show();
    
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
//parent class
class cal
{
    
    public:
    int width,height;
    cal()
    {
        cout<<"Inharitance"<<endl;
    }
    void set(int w,int h)
    {
         width=w;
         height=h;
    }
};
//child class or derived class
class rec : public cal
{
    public:
    
    int Area()
    {
        return (width * height);
    }
    void show()
    {
        cout<<width<<" "<<height<<endl;
    }
};
int main()
{
    rec obj;
    obj.set(5,6);
    obj.show();
    cout<<obj.Area();

    return 0;
}
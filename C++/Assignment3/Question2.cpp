///using outside the function:
#include<bits/stdc++.h>
using namespace std;
class CalculateAreaOfRectangle
{
public:
    void getValue(double x,double y);
    void showArea();

};
void CalculateAreaOfRectangle :: getValue(double x,double y)
{
    double Area=0;
    Area=x*y;
}
void CalculateAreaOfRectangle :: showArea()
{
    double Area;
    cout<<Area;
}
int main()
{
    double x,y;
    CalculateAreaOfRectangle s;
    cout<<"Enter the value of Length and Width:";
    cin>>x>>y;
    s.getValue(x,y);
    s.showArea();
    return 0;
}

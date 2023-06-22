
///Write  a program to print the area of a rectangle by creating a class
/// named "CalculateAreaOfRectangle". There should be two functions in the
/// class. The first one is named as "getValue", which will take length and
/// width as parameter's value. And another function will be "showArea"
///which will show the area of the rectangle related to the object.
#include<bits/stdc++.h>
using namespace std;
class CalculateAreaOfRectangle
{
public:
    void getValue(double x,double y)
    {
        double Area=0;
        Area=x*y;
    }
    void showArea()
    {
        double Area;
        cout<<Area;
    }
};
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

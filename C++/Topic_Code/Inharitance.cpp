// Inharitance has two type.
// Single and multiple inharitance;

#include <bits/stdc++.h>
using namespace std;
// Base claa/Parent class;
class car
{
public:
    void show()
    {
        cout << "I have a car." << endl;
    }
};
class wheel
{
public:
    int w = 4;
};
// Child class/derived class;
// single inharitance
class BMW : public car
{
public:
};
// Multiple inharitance;
class TATA : public car, public wheel
{
};
int main()
{
    BMW s;

    s.show();
    TATA p;
    cout << p.w << endl;
    return 0;
}
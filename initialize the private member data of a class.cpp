#include<iostream>
using namespace std;
class constructor
{
int x;
double y;
public:
constructor(int a, double b);
void display();
};
constructor::constructor(int a, double b)
{
x=a;
y=b;
}
void constructor::display()
{

cout<<"Private member of the data : "<<x<<" "<<y<<endl;
}
int main()
{
constructor s1(10,20.5); ///Implcit call
s1.display();
constructor s2 = constructor(20,40.5); ///Explicit call
s2.display();
return 0;
}

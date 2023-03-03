#include<iostream>
using namespace std;
class nd
{
public:
    int x,y,z;
    double a,b;
    void input();
    int add(int,int, int);
    double add(double,double);
    void display();

};
void nd::input()
{
    cout<<"Enter two floating number : ";
    cin>>a>>b;
    cout<<"Enter three integers numbers : ";
    cin>>x>>y>>z;
}
double nd::add(double a,double b)
{
    return a+b;
}
int nd::add(int x, int y, int z)
{
    return x+y+z;
}
void nd::display()
{
    cout<<"Sum of two floating value : "<<add(a,b)<<endl;
    cout<<"Sum of three integer value : "<<add(x,y,z)<<endl;
}
int main()
{
    nd s;
    s.input();
    s.display();
    return 0;
}

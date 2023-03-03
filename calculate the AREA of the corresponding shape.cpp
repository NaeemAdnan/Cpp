#include<iostream>
using namespace std;
class nd
{
public:
    double area;
    char key;
    void input();
    void trapezoid();
    void triangle();
    void square();
    void rectangle();
    void solution();
};
void nd::input()
{
    cout<<"Type the following keys to calculate area :"<<endl;
    cout<<"'P' or 'p' Trapezoid"<<endl;
    cout<<"'T' or 't' Triangle"<<endl;
    cout<<"'S' or 's' Square"<<endl;
    cout<<"'R' or 'r' Rectangle"<<endl;
    cin>>key;
}
void nd::solution()
{
    if(key=='p' || key=='P')
    {
        trapezoid();
    }

    else if(key=='t' || key=='T')
    {
        triangle();
    }
    else if(key=='s' || key=='S')
    {
        square();
    }
    else if(key=='r' || key=='R')
    {
        rectangle();
    }
    else
    {
        cout<<"!!!Invalid input!!!"<<endl;
    }
}
void nd::trapezoid()
{
    double a,b,h;
    cout<<"Enter base-1, base-2 and height of trapezoid (a,b,h): ";
    cin>>a>>b>>h;
    area = 0.5*(a+b)*h;
    cout<<"The area of the trapezoid : "<<area;
}
void nd::triangle()
{
    double b,h;
    cout<<"Enter the base and height of the triangle (b,h): ";
    cin>>b>>h;
    area = 0.5*b*h;
    cout<<"The area of the triangle : "<<area;
}
void nd::square()
{
    double s;
    cout<<"Enter the side of the sqaure (s): ";

    cin>>s;
    area = s*s;
    cout<<"The area of sqaure : "<<area;
}
void nd::rectangle()
{
    double l,b;
    cout<<"Enter length and width of rectangle (l,w): ";
    cin>>l>>b;
    area = l*b;
    cout<<"The area of the rectangle : "<<area;
}
int main()
{
    nd s;
    s.input();
    s.solution();
    return 0;
}

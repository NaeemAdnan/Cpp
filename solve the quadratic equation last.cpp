#include<iostream>
#include<cmath>
using namespace std;

class Quadratic_eqtn
{

    float a,b,c;

public:
    float input(void);
    float output(void);
};
float Quadratic_eqtn :: input()
{

    cout<<"Enter the value of a,b,c: \n";
    cin>>a>>b>>c;

    return 0;
}

float Quadratic_eqtn :: output()
{
    float realNumber, complex, x1,x2,d;

    d=b*b-4*a*c;

    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);

        cout<<"Root are real and different.\n";
        cout<<"x1= "<<x1<<endl;
        cout<<"x2= "<<x2<<endl;
    }
    else if(d==0)
    {
        cout<<"Root are real and Equal.\n";
        x1=-b/(2*a);
        cout<<"x1=x2= "<<x1<<endl;
    }
    else
    {
        realNumber = -b/(2*a);
        complex = sqrt(-d)/(2*a);
        cout<<"Root are Complex and different.\n";
        cout<<"x1= "<<realNumber<<"+"<<complex<<"i"<<endl;
        cout<<"x2= "<<realNumber<<"+"<<complex<<"i"<<endl;
    }
    return 0;
}
int main()
{
    Quadratic_eqtn obj;
    obj.input();
    obj.output();
}

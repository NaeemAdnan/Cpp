#include<iostream>
using namespace std;
class bonus;
class worker
{
public:
double payment;
int month;
void input();
double total(bonus);
void display();
};
class bonus
{
public:
double bonus_pay;
void input();
};
void worker::input()
{
cout<<"Enter the amount of month : ";
cin>>month;
cout<<"Enter the worker payment : ";
cin>>payment;
}
void bonus::input()
{
cout<<"Enter the total bonus : ";
cin>>bonus_pay;
}
double worker::total(bonus x)
{
return (month*payment)+x.bonus_pay;
}

void worker::display()
{
}
int main()
{
worker nahid;
bonus grade;
nahid.input();
grade.input();
cout<<"The total salary of the worker is : "<<nahid.total(grade)<<endl;
return 0;
}

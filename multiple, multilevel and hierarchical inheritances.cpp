#include<iostream>
using namespace std;
class vehicle
{
public:
double top_speed, accelaration;
vehicle(){

top_speed=160;
accelaration=90;
}
};
class nos_system:public vehicle
{
public:
double add_accelaration;
nos_system(){
add_accelaration=30;
accelaration+=add_accelaration;
top_speed=top_speed;
}
};
class offroad:public nos_system
{
public:
string tire_type="Hard grip";
};
class onroad:public nos_system
{
public:
string tire_type="Soft grip";
};
class racecar
{
public:
double turbochargers,horsepower=750.5;
racecar(){
turbochargers=150;
horsepower+=turbochargers;
}
};

class sportscar:public onroad, public racecar
inheritance{
public:
sportscar(){
horsepower=300+turbochargers;
}
void display();
};
void sportscar::display()
{
cout<<"Car type : Sports car"<<endl;
cout<<"Top speed : "<<top_speed<<" mph"<<endl;;
cout<<"Accelaration : "<<accelaration<<" mph"<<endl;
cout<<"Horsepower : "<<horsepower<<" HP"<<endl;
cout<<"Tire type : "<<tire_type<<endl;
}
int main()
{
vehicle my_car;
nos_system burst;
onroad model1;
racecar formula;
sportscar mclaren;
mclaren.display();
return 0;
}

#include<iostream>
using namespace std;
class constructor
{
int x,y,z=0;
public:
int sum1,sum2;
constructor(int , int );
constructor(int , int , int );
void display();
};
constructor::constructor(int j,int k)
{
x=j;
y=k;
sum1=x+y;
}
constructor::constructor(int j,int k, int l)
{
x=j;

y=k;
z=l;
sum2=x+y+z;
}
void constructor::display()
{
if(z==0){
cout<<"Sum of two integers : "<<sum1<<endl;
}
else{
cout<<"Sum of three integers : "<<sum2<<endl;
}
}
int main()
{
constructor s1(10,20);
s1.display();
constructor s2(10,20,30);
s2.display();
return 0;
}

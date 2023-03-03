#include<iostream>
using namespace std;
class nd
{
public:
    int key;
    double c,f;
    void input();
    void solution();
};
void nd::input()
{
    cout<<"Celsius to Farenheit (Type 1)"<<endl;
    cout<<"Farenheit to Celsius (Type 2)"<<endl;
    cin>>key;
}
void nd::solution()
{

    if(key==1)
    {
        cout << "Enter the temperature in celsius :";
        cin>>c;
        f =(9.0/5.0)*c+32;
        cout<<"Temperature in Farenheit : "<<f;
    }
    else if(key==2)
    {
        cout << "Enter the temperature in Farenheit :";
        cin>>f;
        c = (f-32.0)*5.0/9.0;
        cout<<"Temperature in Celsius : "<<c;
    }
    else
    {
        cout<<"!!!nvalid input!!!"<<endl;
    }
}
int main()
{
    nd s;
    s.input();
    s.solution();
    return 0;
}

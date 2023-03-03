#include<iostream>
#include<cmath>
using namespace std;
class nd
{
public:
    int n,sum=0;
    void input();
    void solution();
    void display();
};
void nd::input()
{
    cout<<"Enter the nth term : ";
    cin>>n;
}
void nd::solution()
{
    for(int i=1; i<=n; i++)
    {
        sum+=pow(i,i);
    }
}
void nd::display()
{

    cout<<"The sum of the series (1^1)+(2^2)+(3^3) + ... + (n^n):  "<<sum<<endl;
}
int main()
{
    nd s;
    s.input();
    s.solution();
    s.display();
    return 0;
}

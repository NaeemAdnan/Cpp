#include<iostream>
using namespace std;
class repeatstring
{
public:
    int n;
    void input();
    void display();
};
void repeatstring ::input()
{
    cout<<"Enter an integer value : ";
    cin>>n;
}
void repeatstring :: display()
{
    for(int i=0; i<n; i++)
    {
        cout<<" Ummm..... Jannat 46 "<<endl;
    }
}
int main()
{
    repeatstring obj;
    obj.input();
    obj.display();

    return 0;
}

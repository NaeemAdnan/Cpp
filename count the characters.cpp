#include<iostream>
using namespace std;
class nd

{
public:
int count;
string str;
void input();
void solution();
void display();
};
void nd::input()
{
cout<<"Enter a string : ";
getline(cin,str);
}
void nd::solution()
{
count=str.length();
cout<<"Characters in the given string : "<<count<<endl;
cout<<"Size of the given string : "<<count<<" bytes"<<endl;
}

int main()
{
nd s;
s.input();
s.solution();
return 0;
}

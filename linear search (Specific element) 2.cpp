#include <iostream>
using namespace std;
int main()
{

int count = 0;
string s("Hello_world");

for (int i = 0; i < s.size(); i++)
    {
       if (s.at(i) == '_')
           count++;
    }
cout << count;
cin.ignore();
return 0;
}

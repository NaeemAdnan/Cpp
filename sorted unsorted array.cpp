#include <iostream>
using namespace std;
class set_elements
{
public:
int arr[100], n, item, i;
void input();
void search();
};
void set_elements::input()
{
cout << "Enter araray limit : ";
cin >> n;
cout << "Enter array elements : ";
for (i = 0; i < n; i++)
{
cin >> arr[i];
}
}
void set_elements::search()
{
cout << "Enter the search element : ";
cin >> item;
for (i = 0; i < n; i++)
{
if (arr[i] == item)
{

cout << item << " is present in the array at loacation "
<< i + 1 << endl;
break;
}
}
if (i == n)
{
cout << item << " is not present in the array." << endl;
}
}
int main()
{
set_elements s1;
s1.input();
s1.search();
return 0;
}

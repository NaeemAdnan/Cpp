#include <iostream>
using namespace std;
int main()
{
    int input[100], count, i, num;
    cout << "Enter Number of Elements in Array: ";
    cin >> count;
    cout << "Enter  numbers:"<< count ;

    for(i =1; i <=count; i++)
    {
        cin >> input[i];
    }
    cout << "Enter a number to search in Array\n";
    cin >> num;

    for(i = 1; i <= count; i++)
    {
        if(input[i] == num)
        {
            cout << "Element found at index " << i;
            break;
        }
    }
    if(i == count)
    {
        cout << "Element Not Present in Input Array\n";
    }
    return 0;
}

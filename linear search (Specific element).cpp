#include<iostream>
using namespace std;
int main()
{
    int array[5], i, num, index;
    cout<<"Enter 5 Numbers: ";
    for(i=1; i<=5; i++)
        cin>>array[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=1; i<=5; i++)
    {
        if(array[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at Index No."<<index;
    cout<<endl;

    return 0;
    }

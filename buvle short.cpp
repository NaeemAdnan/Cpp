#include <iostream>
using namespace std;
class bubble_sort
{
public:
    int data[100], n, i, ptr;
    void input(void);
    void sorting(void);
};
void bubble_sort::input(void)
{
    cout << "Enter array limit: ";
    cin >> n;
    for (i=1; i<=n; i++)
    {
        cin >> data[i];
    }
}
void bubble_sort::sorting(void)
{
    for(i=1; i<=n-1; i++)
    {
        for(ptr=1; ptr<=n-i; ptr++)
        {
            if(data[ptr] > data[ptr+1])
            {
                int temp = data[ptr];
                data[ptr] =data[ptr+1];
                data[ptr+1]=temp;
            }
        }
    }
    cout << endl << "After sorting the result is : ";
    for(ptr=1; ptr <= n ; ptr++)
    {
        cout << data[ptr] << " ";
    }
}
int main()
{
    bubble_sort obj;
    obj.input();
    obj.sorting();
    return 0;
}

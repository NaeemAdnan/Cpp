#include <iostream>
using namespace std;
class two_elements
{
public:
    int array1[100], n, array2[2], i;
    string str = "y";
    void input();
    void search();
};
void two_elements::input()
{
    cout << "Enter array limit : ";
    cin >> n;
    cout << "Enter array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> array1[i];
    }
    cout << "Enter the two search elements : ";
    cin >> array2[0] >> array2[1];
}
void two_elements::search()
{
    for (int j = 0; j <= 1; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (array1[i] == array2[j])
            {
                cout << array2[j] << " is present in the array at loacation " << i + 1 << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << array2[j] << " is not present in the array." << endl;
        }
    }
}
int main()
{
    two_elements obj;
    obj.input();
    obj.search();
    return 0;
}

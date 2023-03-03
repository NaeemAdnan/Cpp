#include<iostream>
using namespace std;
class set_elements
{
public:
    int arr[100], n, item[2], i;
    string str = "y";
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
    cout << "Enter the two search elements : ";
    cin >> item[0] >> item[1];
}
void set_elements::search()
{
    for (int j = 0; j <= 1; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i] == item[j])
            {
                cout << item[j] << " is present in the array at loacation " << i + 1 << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << item[j] << " is not present in the array." << endl;
        }
    }
}
int main()
{
    set_elements s1;
    s1.input();
    s1.search();
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, d, realNum, complexNum;
    cout << "Enter coefficients a: ";
    cin >> a;
    cout << "Enter coefficients b: ";
    cin >> b;
    cout << "Enter coefficients c: ";
    cin >> c;
    d = b*b - 4*a*c;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (d == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else
    {
        realNum = -b/(2*a);
        complexNum =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realNum << "+" << complexNum << "i" << endl;
        cout << "x2 = " << realNum << "-" << complexNum << "i" << endl;
    }

    return 0;
}

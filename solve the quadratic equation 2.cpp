#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c, d, x1, x2;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    d = sqrt(b*b - 4*a*c);


        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}

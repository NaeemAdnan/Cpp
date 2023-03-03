#include <iostream>
using namespace std;

class Naeem
{

public : double sum(int n)
{
	double i, s = 0.0;
	for (i = 1; i <= n; i++)
	s = s + 1/i;
	return s;
}
};

int main()
{
	Naeem obj;
	int n = 5;
	cout << "Sum is " << obj.sum(n);
	return 0;
}



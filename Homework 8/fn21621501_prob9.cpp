#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	double y, x;
	cout << "Enter Value of angle x ";
	cin >> x;
	y = 2 * sin(x) * pow(cos(x), 2)) + 1;
	cout << "The value of the solved problem is " << y;
	return 0;

}
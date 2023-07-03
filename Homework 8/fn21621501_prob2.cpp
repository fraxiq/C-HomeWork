#include <iostream>
using namespace std;

int main()
{
	float height = 0;
	float side = 0;
	cout << "Please enter height" << endl;
	cin >> height;
	cout << "Please enter side" << endl;
	cin >> side;
	float volume = side * height/2;
	cout << "The volume is " << volume << endl;
}
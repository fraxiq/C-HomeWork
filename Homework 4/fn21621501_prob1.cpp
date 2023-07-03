#include <iostream>
#include <cmath>
using namespace std;

void function1(int number);
void function2(int number);
void function3(int number);
void function4(int number);
void function5(int number);


int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;
	function1(number);
	function2(number);
	function3(number);
	function4(number);
	function5(number);

	return 0;
}

void function1(int number)
{
	if (number > 0 && (number % 2) == 0)
	{
		cout<<"The number is: "<< number /2 << endl;
	}
}

void function2(int number)
{
	if (number > 0 && (number % 2) != 0)
	{
		cout << "The number is: " << number * 2;
	}
}
void function3(int number)
{
	if (number < 0 && (number % 2) == 0)
	{
		cout << "The number is: " << number + 3;
	}
}
void function4(int number)
{
	if (number < 0 && (number % 2) != 0)
	{
		float x = number;
		cout << "The number is: " << x - 3.5;
	}
}
void function5(int number)
{
	if (number == 0)
	{
		int x = 1000;
		number = x;
		cout << "The number is: " << number;
	}
}
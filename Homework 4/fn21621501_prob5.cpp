#include <iostream>
#include <cmath>
using namespace std;

void FunSalary(int& money, int &money1);
void FunCosts(int& money, int &money1);

int main()
{
	int money = 5000;
	int money1 = 0;
	cout << "Money + salary: ";
	FunSalary( money, money1);
	cout << "Money at the end of the month: ";
	FunCosts( money, money1);
	return 0;
}

void FunSalary(int& money, int& money1)
{
	money1 = money + 3000;
	cout << money1 << endl;
}
void FunCosts(int& money, int &money1)
{
	int money2;
	money2 = money1 - (4 * 500);
	cout << money2 << endl;
}
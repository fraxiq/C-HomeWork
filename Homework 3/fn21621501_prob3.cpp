#include<iostream>
using namespace std;

void averageNumber(int a, int b, int c, int d, int& average);


int main()
{
	int a;
	int b;
	int c;
	int d;
	int average = 0;

	cout << "Vuvedi purvo chislo: " << endl;
	cin >> a;
	cout << "Vuvedi vtoro chislo: " << endl;
	cin >> b;
	cout << "Vuvedi treto chislo: " << endl;
	cin >> c;
	cout << "Vuvedi chetvurto chislo: " << endl;
	cin >> d;
	averageNumber(a, b, c, d, average);
	cout << "The average value is: " << average << endl;
	return 0;
}

void averageNumber(int a, int b, int c, int d, int& average)
{
	average = (a + b + c + d) / 4;
}

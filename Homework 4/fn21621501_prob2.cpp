#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main()
{
	int *ptrint, a;
	double *ptrdouble, b;
	char *ptrchar, c;

	cout << left << setw(15) << "Variable";
	cout << left << setw(10) << "size";
	cout << left << setw(10) << "Pointer";
	cout << left << setw(15) << "size";
	cout << endl;

	cout << left << setw(15) << 'a';
	cout << left << setw(10) << sizeof(a);
	cout << left << setw(10) << "pa";
	cout << left << setw(15) << sizeof(*ptrint);
	cout << endl;

	cout << left << setw(15) << 'b';
	cout << left << setw(10) << sizeof(b);
	cout << left << setw(10) << "pb";
	cout << left << setw(15) << sizeof(*ptrdouble);
	cout << endl;

	cout << left << setw(15) << 'c';
	cout << left << setw(10) << sizeof(c);
	cout << left << setw(10) << "pc";
	cout << left << setw(15) << sizeof(*ptrchar);
	cout << endl;

	system("pause");
	return 0;
}
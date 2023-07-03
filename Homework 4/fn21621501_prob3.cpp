#include <iostream>
#include <cmath>
using namespace std;

void FunP(double a, double h, double& P);
void FunS(double a, double h, double& S);

int main()
{
	double a, h;
	double P = 0.0;
	double S = 0.0;
	cout << "Enter a: ";
	cin >> a;
	cout << endl;
	cout << "Enter h: ";
	cin >> h;
	cout << "P= " ;
	FunP(a, h, P);
	cout << "S= " ;
	FunS(a, h, S);

	return 0;
}

void FunP(double a, double h, double& P)
{
	cout<<4 * a<<endl;
}

void FunS(double a, double h, double& S)
{
	cout<<a* h<<endl;
}
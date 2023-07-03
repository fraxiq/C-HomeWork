#include <iostream>
using namespace std;

int main()
{
	int A = 42;
	int B = 23;
	float C = A / B; //Тук се извършва просто деление на целочислени променливи (закръгля се)
	cout << "C is equal to " << C << endl; 
	float D = (float)A / B; //Тук се пресмята с точност след запетаята поради причината, че едната промелива става float
	cout << "D is equal to " << D << endl;
}
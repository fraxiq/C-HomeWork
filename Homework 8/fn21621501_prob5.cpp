#include <iostream>
using namespace std;

int main()
{
	int A = 42;
	int B = 23;
	float C = A / B; //��� �� �������� ������ ������� �� ����������� ���������� (�������� ��)
	cout << "C is equal to " << C << endl; 
	float D = (float)A / B; //��� �� �������� � ������� ���� ��������� ������ ���������, �� ������ ��������� ����� float
	cout << "D is equal to " << D << endl;
}
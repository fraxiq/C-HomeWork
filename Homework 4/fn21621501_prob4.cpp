#include <iostream>
#include <cmath>
using namespace std;

void FunXYZ(int x, int y, int z);

int main()
{
	int x, y, z;
	cout << "Enter numbers: ";
	cin >> x >> y >> z;
	FunXYZ(x, y, z);

	return 0;
}

void FunXYZ(int x, int y, int z)
{
	if (x > 0 && (x % 3) == 0)
	{
		cout << "Number " << x << " can be divided by 3 without surplus, so Y is equal to : " << 2 * y;
	}
	else if (x > 0 && (x % 3) != 0)
	{
		cout << "Number " << x << " can't be divided by 3 without surplus, so Z is equal to: " << pow(z, 3) + pow(z, 2) + 1;
	}
	else if (x <= 0)
	{
		cout << "Error" << endl;
	}
}
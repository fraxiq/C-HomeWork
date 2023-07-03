#include <iostream>
using namespace std;

int main()
{
	float const DDS = 0.2;
	int EndPrice = 0;
	cout << "Please enter price of product" << endl;
	cin >> EndPrice;
	
	float DDSValue = (EndPrice*DDS)/(100+DDS);
	cout << "The DDS value is " << DDSValue << endl;
}
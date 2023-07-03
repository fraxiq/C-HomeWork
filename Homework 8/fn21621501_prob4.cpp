#include<iostream>
using namespace std;

int main()
{
	char cMax = CHAR_MAX;
	char cMin = CHAR_MIN;
	int iMax = INT_MAX;
	int iMin = INT_MIN;
	long long lLMax = LLONG_MAX;
	long long lLMin = LLONG_MIN;
	cout << "the minimum value of char is " << cMin << " and the maximum value is " << cMax << endl;
	cout << "the minimum value of int is " << iMin << " and the maximum value is " << iMax << endl;
	cout << "the minimum value of long long is " << lLMin << " and the maximum value is " << lLMax << endl;

	return 0;
}
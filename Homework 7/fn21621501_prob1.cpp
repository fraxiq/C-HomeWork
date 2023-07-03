#include <iostream>
using namespace std;
void input(int a[], int n);
void output(int a[], int n, int x);

int main() {
	setlocale(LC_ALL, "");
	const int count = 5;
	int array[count];
	int check;
	cout << "Въведете 5 числа:" << endl;
	input(array, count);
	cout << "Въведете число за проверка: ";
	cin >> check;
	output(array, count, check);
	return 0;
}

void input(int a[], int n) {

	for (int index = 0; index < n; index++) {
		cin >> a[index];
	}
}

void output(int a[], int n, int x) {
	bool y = false;
	for (int index = 0; index < n; index++) {
		if (a[index] == x) {
			cout << index << endl;
			y = true;
		}

	}
	if (y != true) {
		cout << "Не се среща" << endl;
	}
}
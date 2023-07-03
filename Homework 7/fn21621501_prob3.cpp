#include <iostream>
#include <string>
#include <locale>
#include <Windows.h>
using namespace std;

void coding();
void decoding();
#include <windows.h>
string fromDos(string dosString)
{
	char buf[1000000];
	OemToCharA(dosString.c_str(), buf);
	return buf;
}
int main() {
	setlocale(LC_ALL, "Bulgarian");
	char choice;
	bool x;
	cout << "Изберете опция:" << endl;
	cout << "За кодиране въведете 'a'." << endl;
	cout << "За декодиране въведете 'b'." << endl;
	do {
		cin >> choice;
		switch (choice) {
		case 'a':
			coding();
			x = true;
			break;
		case 'b':
			decoding();
			x = true;
			break;
		default:
			cout << "Невалидна команда, моля изберете валидна опция." << endl;
			x = false;
			break;
		}
	} while (x != true);

	return 0;
}





void coding() {
	setlocale(LC_ALL, "Bulgarian");
	string a;
	cout << "Въведете съобщение: ";
	cin.ignore();
	getline(cin, a);
	a = fromDos(a);
	for (int index = 0; index < a.length(); index++) {
		if (a[index] == 'Т' || a[index] == 'т') {
			a[index] = '$';
		}
		else if (a[index] == 'Н' || a[index] == 'н') {
			a[index] = '*';
		}
	}
	cout << a << endl;
}
void decoding() {
	string a;
	cout << "Въведете съобщение: ";
	cin.ignore();
	getline(cin, a);
	a = fromDos(a);
	for (int index = 0; index < a.length(); index++) {
		if (a[index] == '$') {
			a[index] = 'т';
		}
		else if (a[index] == '*') {
			a[index] = 'н';
		}
	}
	cout << a << endl;
}
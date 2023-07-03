#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

string fromDos(string dosString)
{
	char buf[1000000];
	OemToCharA(dosString.c_str(), buf);
	return buf;
}

void search(string str);


int main() {
	setlocale(LC_ALL, "BG");
	string text;
	cout << "Въведете изречение: ";
	getline(cin, text);
	text = fromDos(text);
	search(text);
	return 0;
}

void search(string str) {
	int a = 0;
	int o = 0;
	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == 'А' || str[i] == 'а') {
			a++;
		}
		else if (str[i] == 'О' || str[i] == 'о') {
			o++;
		}
	}
	if (a > o) {
		cout << "А се среща по-често" << endl;
	}
	else if (a < o) {
		cout << "О се среща по-често" << endl;
	}
	else if (a == o) {
		cout << "Равенство" << endl;
	}
}
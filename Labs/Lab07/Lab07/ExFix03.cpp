#include <iostream>

using namespace std;

char charada(char, char);

int main() {

	system("chcp 1252 > nil");
	
	cout << charada('<', 20);
	cout << charada('\7', 90);
	cout << charada('(', 72);
	cout << charada('5', 48);
	cout << charada('\1', 107);

	return 0;
}

char charada(char ch, char x) {
	return ch + x;
}


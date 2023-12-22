#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	char nome[] = "C++ Primer Plus";

	cout << strlen(nome);
	cout << endl;
	cout << sizeof nome;
}
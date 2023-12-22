#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	char string[5]{ 'D','A','V','I','\0' };
	char caracteres[4]{ 'D','A','V','I' };

	cout << string;
	cout << endl;
	cout << caracteres;
}
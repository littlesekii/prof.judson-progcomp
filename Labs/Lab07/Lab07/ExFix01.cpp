#include <iostream>

using namespace std;

void printASCIICharFromCode(char);

int main() {

	printASCIICharFromCode(80);
	printASCIICharFromCode(114);
	printASCIICharFromCode(111);	
	printASCIICharFromCode(103);
	printASCIICharFromCode(67);
	printASCIICharFromCode(111);
	printASCIICharFromCode(109);
	printASCIICharFromCode(112);

	return 0;
}

void printASCIICharFromCode(char code) {
	cout << code;
}
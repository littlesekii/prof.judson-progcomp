#include <iostream>

using namespace std;

int main() {

	const int METROS_POR_KM = 1000;

	system("chcp 1252 > nil");

	int metros;
	cout << "Entre com a dist�ncia em metros: ";
	cin >> metros;

	cout << metros << " metros equivalem a " 
		<< metros / METROS_POR_KM 
		<< " quil�metros e "
		<< metros % METROS_POR_KM 
		<< " metros.";

	return 0;
}
#include <iostream>

using namespace std;

int main(void) {

	system("chcp 1252 > nul");

	cout << "Entre com a altura, largura e comprimento:\n";
	
	float x, y, z;
	cin >> x >> y >> z;
	//cin >> x;
	//cin >> y;
	//cin >> z;

	float volume = x * y * z;
	cout << "O volume é " << volume << " cm³.";

	return 0;
}
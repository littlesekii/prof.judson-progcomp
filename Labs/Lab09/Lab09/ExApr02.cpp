#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");


	int n1, n2;
	cout << "Digite dois n�meros inteiros: ";
	cin >> n1;
	cin >> n2;

	cout << "O quociente " << n1 << "/" << n2 << " � " << n1 / n2;
	cout << endl;
	cout << "O resto da divis�o " << n1 << "%" << n2 << " � " << n1 % n2;

	return 0;
}
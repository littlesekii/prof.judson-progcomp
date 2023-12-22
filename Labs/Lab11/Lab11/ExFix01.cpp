#include <iostream>

using namespace std;

int main() {

	char primeiroNome[5];
	char segundoNome[9];

	cout << "Primeiro nome? ";
	cin >> primeiroNome;
	cout << "Segundo nome? ";
	cin >> segundoNome;

	cout << "Bom dia, " << primeiroNome << " " << segundoNome << ".";
	cout << endl;
	cout << "Seja bem vindo " << primeiroNome[0] << segundoNome[0] << "!";
}
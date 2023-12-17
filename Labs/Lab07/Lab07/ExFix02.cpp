#include <iostream>

using namespace std;

#define PASSWORD 1324;

void alert();
short askPassword();

int main() {

	alert();
	cout << endl;

	short rightPassword = PASSWORD;
	if (askPassword() == rightPassword)
		cout << "Obrigado!";
	else
		cout << "Senha incoreta.";


	return 0;
}

void alert() {
	cout << "\aIniciando com um som...";
}

short askPassword() {
	cout << "Digite sua senha: ____\b\b\b\b";
	short pass;
	cin >> pass;
	return pass;
}
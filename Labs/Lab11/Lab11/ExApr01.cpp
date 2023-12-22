#include <iostream>

using namespace std;


int main() {
	system("chcp 1252 > nil");

	const char senha[]{ "seki#2024" };

	char input[20];

	cout << "Digite a senha: ";
	cin >> input;

	bool authenticated = strcmp(input, senha) == 0;

	char message[30];
	if (authenticated)
		strcpy_s(message, "Senha correta.");
	else
		strcpy_s(message, "Senha incorreta.");
		 
	cout << message;
	
}


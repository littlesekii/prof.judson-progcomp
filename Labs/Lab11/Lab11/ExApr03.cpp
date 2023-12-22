#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	char nome[20];
	char data[20];
	char mensagem[100]{ "" };

	cout << "Nome: ";
	cin.getline(nome, 20);
	cout << "Data: ";
	cin >> data;
	
	strcat(mensagem, nome);
	strcat(mensagem, " esteve aqui em ");
	strcat(mensagem, data);
	strcat(mensagem, ".");

	cout << mensagem;
}


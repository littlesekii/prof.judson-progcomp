#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	char nome[20];
	char conceito;

	cout << "Qual seu nome? ";
	cin.getline(nome, 20);
	cout << "Qual conceito voc� merece? ";
	cin >> conceito;

	cout << "Bom dia, " << nome << ". Seu conceito � " << char(conceito + 1);
}
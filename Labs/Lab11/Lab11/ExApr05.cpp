#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	//mudei o contexto para jogos 

	char nome[20];
	char sobrenome[20];

	char nomeCompleto[20];

	cout << "Quais seus videogames preferidos? ";
	cin >> nome;
	cin >> sobrenome;

	cout << "Bom dia, senhor " << sobrenome << ". Ou devo chamá-lo de " << nome << "?";
}



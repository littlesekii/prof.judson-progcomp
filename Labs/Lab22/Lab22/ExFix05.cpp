#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	system("chcp 1252 > nil");


	cout << "Menu do Sistema\n\n"
		"a) Inserir\n"
		"b) Remover\n"
		"c) Buscar\n"
		"d) Sair\n";
	cout << endl;

	char option;
	do 
	{
		cout << "Escolha: ";
		cin >> option;

		switch (option) {
			case 'a':
				cout << "Inserindo elementos...";
				break;
			case 'b':
				cout << "Removendo elementos...";
				break;
			case 'c':
				cout << "Buscando elementos...";
				break;
			case 'd':
				cout << "Tchau!";
				break;
			default:
				cout << "Opção Inválida";
		}
		cout << endl << endl;
	} while (option != 'd');


	return 0;
}
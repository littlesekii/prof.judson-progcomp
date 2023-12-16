#include <iostream>

using namespace std;

void Linha();
void Pequena();
void Media();
void Grande();

int main(void) {

	system("chcp 1252 > nil");

	Pequena();
	cout << endl;
	Media();
	cout << endl;
	Grande();
	cout << endl;
	cout << "Programação de Computadores";
	cout << endl;
	Grande();
	cout << endl;
	Media();
	cout << endl;
	Pequena();

	return 0;
}

void Linha() {
	cout << "----------";
}
void Pequena() {
	Linha();
}

void Media() {
	Linha();
	Linha();
}

void Grande() {
	Linha();
	Linha();
	Linha();
}

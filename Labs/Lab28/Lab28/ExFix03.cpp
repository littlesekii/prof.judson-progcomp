#include <iostream>

using namespace std;

struct Caixa
{
	char marca[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};

void mostrarCaixa(Caixa*);
void calcularVolume(Caixa*);

int main()
{
	system("chcp 1252 > nil");

	Caixa caixa{ "Seki", 10, 10, 20, 0 };

	mostrarCaixa(&caixa);
	cout << endl;
	calcularVolume(&caixa);
	cout << endl;
	mostrarCaixa(&caixa);

	return EXIT_SUCCESS;
}

void mostrarCaixa(Caixa* caixa)
{
	cout << "Marca: " << caixa->marca;
	cout << endl;
	cout << "Altura: " << caixa->altura;
	cout << endl;
	cout << "Largura: " << caixa->largura;
	cout << endl;
	cout << "Comprimento: " << caixa->comprimento;
	cout << endl;
	cout << "Volume: " << caixa->volume;
}

void calcularVolume(Caixa* caixa)
{
	caixa->volume = caixa->altura * caixa->largura * caixa->comprimento;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct Guloseima
{
	char marca[24];
	double peso;
	int calorias;
};

void editarGuloseima(Guloseima&, const char* marca = "Charge", double peso = 40.0, int calorias = 187);
void mostrarGuloseima(const Guloseima&);

int main()
{
	system("chcp 1252 > nil");

	Guloseima charge, baton;

	editarGuloseima(charge);
	editarGuloseima(baton, "Baton", 10, 1000);

	mostrarGuloseima(charge);
	cout << endl;
	mostrarGuloseima(baton);

	return 0;
}

void editarGuloseima(Guloseima& guloseima, const char* marca, double peso, int calorias)
{
	strcpy(guloseima.marca, marca);
	guloseima.peso = peso;
	guloseima.calorias = calorias;
}

void mostrarGuloseima(const Guloseima& guloseima)
{
	cout << guloseima.marca << endl;
	cout << guloseima.peso << endl;
	cout << guloseima.calorias << endl;
}
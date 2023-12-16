#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	float METS_C = 7.0;
	float METS_N = 8.0;

	float totalCalorias = 0;

	float peso;
	cout << "Digite seu peso em quilos: ";
	cin >> peso;

	int horas, minutos;
	cout << "Digite o tempo de corrida: ";
	cin >> horas; cin.get(); cin >> minutos; cin.get();

	totalCalorias += METS_C * peso * ((horas * 60 + minutos) / 60.0);

	cout << "Digite o tempo de cilismo: ";
	cin >> horas; cin.get(); cin >> minutos; cin.get();

	totalCalorias += METS_C * peso * ((horas * 60 + minutos) / 60.0);

	cout << "Digite o tempo de natação: ";
	cin >> horas; cin.get(); cin >> minutos; cin.get();

	totalCalorias += METS_N * peso * ((horas * 60 + minutos) / 60.0);

	cout << "VocÊ gastou um total de " << totalCalorias << " calorias.";
}
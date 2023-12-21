#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	const int horasDia = 24;
	const int minutosHora = 60;
	const int segundosMinuto = 60;

	int segundosTotal;

	cout << "Entre com o número de segundos: ";
	cin >> segundosTotal;

	int dias, horas, minutos, segundos;

	int segundosRestantes = segundosTotal;

	dias = segundosRestantes / (segundosMinuto * minutosHora * horasDia);
	segundosRestantes %= (segundosMinuto * minutosHora * horasDia);

	horas = segundosRestantes / (segundosMinuto * minutosHora);
	segundosRestantes %= (segundosMinuto * minutosHora);

	minutos = segundosRestantes / (segundosMinuto);
	segundosRestantes %= (segundosMinuto);

	segundos = segundosRestantes;

	cout << segundosTotal << " segundos = " 
		<< dias << " dias, "
		<< horas << " horas, " 
		<< minutos << " minutos e "
		<< segundos << " segundos.";

	return 0;
}
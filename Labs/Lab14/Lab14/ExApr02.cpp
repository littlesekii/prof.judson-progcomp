#include <iostream>
#include "utils.h"

using namespace std;

struct Horario {
	unsigned short hh;
	unsigned short mm;
};

void mostrarHorario(Horario*);

int main() {
	UTF8_CMD();

	Horario horas{};

	cout << "Que horas são? ";
	cin >> horas.hh;
	cin.ignore();
	cin >> horas.mm;

	Horario* ptrHoras = &horas;


	++ptrHoras->hh;
	cout << "Seu relógio está atrasado, o horário correto é ";
	mostrarHorario(ptrHoras);

	return 0;
}

void mostrarHorario(Horario* horario) {
	cout << horario->hh << ":" << horario->mm;
}


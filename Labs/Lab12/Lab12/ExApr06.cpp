#include <iostream>

struct hora {
	unsigned short hh;
	unsigned short mm;
};

hora lerHora();
void exibirHora(hora);
int subtrairHorasMM(hora, hora);

int main() {
	system("chcp 1252 > nil");

	hora inicio{};
	hora fim{};

	std::cout << "Início: ";
	inicio = lerHora();

	std::cout << "Fim: ";
	fim = lerHora();

	int difMinutos{ subtrairHorasMM(fim, inicio) };

	std::cout << "Entre ";
	exibirHora(inicio);
	std::cout << " e ";
	exibirHora(fim);
	std::cout << " existem ";
	std::cout << difMinutos;
	std::cout << " minutos, isto é, ";
	std::cout << difMinutos / 60;
	std::cout << "h e ";
	std::cout << difMinutos % 60;
	std::cout << "minutos.";

	return 0;
}

hora lerHora() {
	hora result{};
	std::cin >> result.hh;
	std::cin.ignore();
	std::cin >> result.mm;

	return result;
}

void exibirHora(hora hora) {
	char texto[6]{};

	snprintf(texto, 6, "%02d:%02d", hora.hh, hora.mm);
	std::cout << texto;
}

int subtrairHorasMM(hora horaFim, hora horaInicio) {
	int result{};

	int minutosFim = horaFim.mm + horaFim.hh * 60;
	int minutosInicio = horaInicio.mm + horaInicio.hh * 60;

	result = minutosFim - minutosInicio;

	return result;
}
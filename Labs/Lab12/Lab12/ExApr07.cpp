#include <iostream>

struct hora {
	unsigned short hh;
	unsigned short mm;
};

std::istream& operator>>(std::istream&, hora&);
std::ostream& operator<<(std::ostream&, hora&);
int operator-(hora, hora);

int main() {
	system("chcp 1252 > nil");

	hora inicio{};
	hora fim{};

	std::cout << "Início: ";
	std::cin >> inicio;

	std::cout << "Fim: ";
	std::cin >> fim;

	int difMinutos{ fim - inicio };

	std::cout << "Entre ";
	std::cout << inicio;
	std::cout << " e ";
	std::cout << fim;
	std::cout << " existem ";
	std::cout << difMinutos;
	std::cout << " minutos, isto é, ";
	std::cout << difMinutos / 60;
	std::cout << "h e ";
	std::cout << difMinutos % 60;
	std::cout << "minutos.";

	return 0;
}

std::istream& operator>>(std::istream& in, hora& hora) {
	in >> hora.hh;
	in.ignore();
	in >> hora.mm;

	return in;
}

std::ostream& operator<<(std::ostream& out, hora& hora) {
	char texto[6]{};

	snprintf(texto, 6, "%02d:%02d", hora.hh, hora.mm);
	out << texto;

	return out;
}

int operator-(hora horaFim, hora horaInicio) {
	int result{};

	int minutosFim = horaFim.mm + horaFim.hh * 60;
	int minutosInicio = horaInicio.mm + horaInicio.hh * 60;

	result = minutosFim - minutosInicio;

	return result;
}
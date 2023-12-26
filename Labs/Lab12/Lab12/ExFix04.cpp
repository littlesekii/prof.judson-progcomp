#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct data {
	short dia;
	short mes;
	short ano;
};

std::istream& operator>>(std::istream&, data&);
std::ostream& operator<<(std::ostream&, data&);
unsigned short operator-(data, data);

int main(void) {
	system("chcp 1252 > nil");

	data dataNascimento{};
	data dataAtual{};

	std::cout << "Data de nascimento: ";
	std::cin >> dataNascimento;

	std::cout << "Data de hoje: ";
	std::cin >> dataAtual;

	std::cout << "Você tem " << dataAtual - dataNascimento << " dias de vida.";

	std::cout << std::endl;

	std::cout << dataAtual << " - " << dataNascimento;

	return 0;
}

std::istream& operator>>(std::istream& in, data& data) {
	in >> data.dia;
	in.ignore();
	in >> data.mes;
	in.ignore();
	in >> data.ano;

	return in;
}

std::ostream& operator<<(std::ostream& out, data& data) {
	char result[11]{};
	sprintf(result, "%02d/%02d/%04d", data.dia, data.mes, data.ano);

	out << result;

	return out;
}

unsigned short operator-(data dataFim, data dataInicio) {
	const short DIAS_MES = 31;
	const short DIAS_ANO = 365;

	int dias{ 0 };

	short difAnos = dataFim.ano - dataInicio.ano;
	short difMeses = dataFim.mes - dataInicio.mes;
	short difDias = dataFim.dia - dataInicio.dia;

	dias += difAnos * DIAS_ANO;
	dias += difMeses * DIAS_MES;
	dias += difDias;

	return dias;
}
#include <iostream>

struct data {
	short dia;
	short mes;
	short ano;
};

unsigned short diasVividos(data, data);

int main(void) {
	system("chcp 1252 > nil");

	data dataNascimento{};
	data dataAtual{};

	std::cout << "Data de nascimento: ";
	std::cin >> dataNascimento.dia;
	std::cin.ignore();
	std::cin >> dataNascimento.mes;
	std::cin.ignore();
	std::cin >> dataNascimento.ano;

	std::cout << "Data de hoje: ";
	std::cin >> dataAtual.dia;
	std::cin.ignore();
	std::cin >> dataAtual.mes;
	std::cin.ignore();
	std::cin >> dataAtual.ano;

	std::cout << "Você tem " << diasVividos(dataNascimento, dataAtual) << " dias de vida.";

	return 0;
}

unsigned short diasVividos(data dataInicio, data dataFim) {
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
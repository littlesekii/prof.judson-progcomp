#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct data {
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};

struct hora {
	unsigned short hora;
	unsigned short minuto;
};

struct evento {
	data data;
	hora horario;
	char descricao[19];
};

int main() {
	system("chcp 1252 > nil");

	evento eventos[10]{};

	std::cout << "Entre com 2 eventos: \n";

	std::cout << "#1\n";
	std::cout << "Data: ";
	std::cin >> eventos->data.dia;
	std::cin >> eventos->data.mes;
	std::cin >> eventos->data.ano;

	std::cout << "Hora: ";
	std::cin >> eventos->horario.hora;
	std::cin >> eventos->horario.minuto;
	std::cin.ignore();

	std::cout << "Desc: ";
	std::cin.getline(eventos->descricao, sizeof(eventos->descricao) / sizeof(char));

	std::cout << "#2\n";
	std::cout << "Data: ";
	std::cin >> (eventos + 1)->data.dia;
	std::cin >> (eventos + 1)->data.mes;
	std::cin >> (eventos + 1)->data.ano;

	std::cout << "Hora: ";
	std::cin >> (eventos + 1)->horario.hora;
	std::cin >> (eventos + 1)->horario.minuto;
	std::cin.ignore();

	std::cout << "Desc: ";
	std::cin.getline((eventos + 1)->descricao, sizeof((eventos + 1)->descricao) / sizeof(char));

	std::cout << "-----------------\n";
	std::cout << "Eventos Cadastrados\n";

	char retorno[101];

	sprintf(retorno, "%02d/%02d/%04d %02d:%02d %s",
		eventos->data.dia,
		eventos->data.mes,
		eventos->data.ano,

		eventos->horario.hora,
		eventos->horario.minuto,
		
		eventos->descricao
	);


	std::cout << retorno;
	std::cout << std::endl;

	sprintf(retorno, "%02d/%02d/%04d %02d:%02d %s",
		(eventos + 1)->data.dia,
		(eventos + 1)->data.mes,
		(eventos + 1)->data.ano,

		(eventos + 1)->horario.hora,
		(eventos + 1)->horario.minuto,

		(eventos + 1)->descricao
	);

	std::cout << retorno;
	

	return 0;
}
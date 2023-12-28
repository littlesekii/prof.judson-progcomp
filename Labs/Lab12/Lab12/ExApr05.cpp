#include <iostream>

struct data {
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};

struct hora {
	unsigned short hor;
	unsigned short min;
	unsigned short seg;
};

struct evento {
	char local[101];
	data data;
	hora horario;
};


int main() {
	system("chcp 1252 > nil");

	evento evento;

	std::cout << "Digite o local do evento: ";
	std::cin.getline(evento.local, 101);
	system("cls");

	std::cout << "Digite a data do evento: ";
	std::cin >> evento.data.dia;
	std::cin.ignore();
	std::cin >> evento.data.mes;
	std::cin.ignore();
	std::cin >> evento.data.ano;
	system("cls");

	std::cout << "Digite o horário do evento: ";
	std::cin >> evento.horario.hor;
	std::cin.ignore();
	std::cin >> evento.horario.min;
	std::cin.ignore();
	std::cin >> evento.horario.seg;
	system("cls");

	std::cout << "------------EVENTIM------------\n";
	std::cout << "Local: " << evento.local << std::endl;

	char data[200];
	snprintf(
		data, 200,
		"Data: %02d/%02d/%04d",
		evento.data.dia,
		evento.data.mes,
		evento.data.ano
	);

	std::cout << data << std::endl;

	char horario[200];
	snprintf(
		horario, 200, 
		"Horário: %02d:%02d:%02d", 
		evento.horario.hor, 
		evento.horario.min, 
		evento.horario.seg
	);

	std::cout << horario << std::endl;

	return 0;
}
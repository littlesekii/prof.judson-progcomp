#include <iostream>
#include <iomanip>

struct palavra {
	char pt[101];
	char en[101];
	char es[101];
};

int main() {
	system("chcp 1252 > nil");

	palavra dicionario[10]{
		{
			"Agridoce",
			"Bittersweet",
			"Agridulce"
		},
		{
			"Memorias",
			"Memories",
			"Recuerdos"
		},
		{
			"Sujo",
			"Dirty",
			"Sucio"
		},
	};


	std::cout << "Digite entre com mais uma palabra no dicion�rio.\n";
	std::cout << "Portugu�s: ";
	std::cin >> dicionario[3].pt;

	std::cout << "Ingl�s: ";
	std::cin >> dicionario[3].en;

	std::cout << "Espanhol: ";
	std::cin >> dicionario[3].es;

	std::cout << "----------DICION�RIO LITTLESEKII---------- ";
	std::cout << std::endl;
	std::cout << std::setw(20) << std::left << "Portugu�s" << std::setw(20) << std::left << "Ingl�s" << std::setw(20) << std::left << "Espanhol";
	std::cout << std::endl;
	std::cout << std::setw(20) << std::left << dicionario[0].pt << std::setw(20) << std::left << dicionario[0].en << std::setw(20) << std::left << dicionario[0].es;
	std::cout << std::endl;
	std::cout << std::setw(20) << std::left << dicionario[1].pt << std::setw(20) << std::left << dicionario[1].en << std::setw(20) << std::left << dicionario[1].es;
	std::cout << std::endl;
	std::cout << std::setw(20) << std::left << dicionario[2].pt << std::setw(20) << std::left << dicionario[2].en << std::setw(20) << std::left << dicionario[2].es;
	std::cout << std::endl;
	std::cout << std::setw(20) << std::left << dicionario[3].pt << std::setw(20) << std::left << dicionario[3].en << std::setw(20) << std::left << dicionario[3].es;
	std::cout << std::endl;

	return 0;
}
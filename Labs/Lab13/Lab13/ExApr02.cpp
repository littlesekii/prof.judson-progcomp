#include <iostream>

union jogador {
	char nome[25];
	int numero;
};

struct gol {
	jogador jogador;
	int hora, min;
};


int main() {
	system("chcp 1252 > nil");
	
	gol gols[3]{};

	std::cout << "Digite os dados dos 3 últimos gols:\n";
	std::cout << "Gol: ";
	std::cin >> (gols)->jogador.nome;
	std::cin >> (gols)->hora;
	std::cin.ignore();
	std::cin >> (gols)->min;

	std::cout << "Gol: ";
	std::cin >> (gols + 1)->jogador.nome;
	std::cin >> (gols + 1)->hora;
	std::cin.ignore();
	std::cin >> (gols + 1)->min;

	std::cout << "Gol: ";
	std::cin >> (gols + 2)->jogador.numero;
	std::cin >> (gols + 2)->hora;
	std::cin.ignore();
	std::cin >> (gols + 2)->min;

	return 0;
}
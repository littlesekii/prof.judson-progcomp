#include <iostream>

struct conta_bancaria {
	unsigned short id;
	char nome[101];
	double saldo;
};

int main() {

	system("chcp 1252 > nil");

	conta_bancaria conta = {};
	srand(time(NULL));
	rand();
	int rands = rand();
	conta.id = rands;

	std::cout << "Olá, entre com os dados da sua conta bancária.\n";
	std::cout << "Nome completo: ";
	std::cin.getline(conta.nome, sizeof conta.nome);

	system("cls");

	std::cout << std::fixed;
	std::cout.precision(2);

	std::cout << "Account id number " << conta.id << " - Littlesekii's Bank™\n";
	std::cout << "Bem vindo sr(a). " << conta.nome << ".\n\n";
	std::cout << "Saldo em conta: R$" << conta.saldo;
	std::cout << std::endl << std::endl;

	double deposito{};
	std::cout << "Quanto o(a) sr(a). deseja depositar? R$";
	std::cin >> deposito;

	conta.saldo += deposito;

	system("cls");

	std::cout << "Account id number " << conta.id << " - Littlesekii's Bank™\n";
	std::cout << "Bem vindo sr(a). " << conta.nome << ".\n\n";
	std::cout << "Saldo em conta: R$" << conta.saldo;
	std::cout << std::endl;

	return 0;
}
#include <iostream>

struct livro {
	char nome[101];
	int qtdPaginas;
};

struct jogo {
	char nome[101];
	int horasDeJogo;
};

int main() {
	system("chcp 1252 > nil");


	livro livrosEmprestados[10];
	jogo jogosEmprestados[10];

	bool querLivro;

	std::cout << "Olá usuário você quer um livro(1) ou um jogo(0) emprestado? ";
	std::cin >> querLivro;

	if (querLivro) {
		livrosEmprestados[0] = { "Percy Jackson", 230 };
		std::cout << livrosEmprestados[0].nome << " - " << livrosEmprestados[0].qtdPaginas << " páginas.";
	}
	else {
		jogosEmprestados[0] = { "Chrono Trigger", 12 };
		std::cout << jogosEmprestados[0].nome << " - " << jogosEmprestados[0].horasDeJogo << " horas de jogo.";
	}

	return 0;
}
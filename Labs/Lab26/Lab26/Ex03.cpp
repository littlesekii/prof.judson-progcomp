#include <iostream>

using namespace std;

struct candidato
{
	char nome[30];
	int notas[3];
};

void mostrarCandidato(candidato);
void mostrarCandidato(candidato*);
void mostrarCandidatos(candidato*, int);

int main()
{
	system("chcp 1252 > nil");



	return 0;
}

void mostrarCandidato(candidato c) 
{
	cout << "Nome: " << c.nome;
	cout << endl;
	cout << "Notas: " << c.notas;
}

void mostrarCandidato(candidato* c)
{
	cout << "Nome: " << c->nome;
	cout << endl;
	cout << "Notas: " << c->notas;
}

void mostrarCandidatos(candidato* c, int tam) 
{
	for (size_t i = 0; i < tam; i++)
	{
		cout << "Nome: " << c[i].nome;
		cout << endl;
		cout << "Notas: " << c[i].notas;
	}
}
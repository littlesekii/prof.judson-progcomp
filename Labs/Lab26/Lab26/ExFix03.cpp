#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

const int TAM_NOME = 30;

struct aluno
{
	char nome[TAM_NOME];
	int nivel;
};

// solicita e armazena informa��es de alunos:
// - encerrando ao preencher o vetor ou quando o usu�rio 
// entrar com uma linha em branco para o nome do aluno
// - a fun��o retorna o n�mero de alunos lidos
int PegarInfo(aluno va[], int n);
// mostra o conte�do de um registro aluno
void Mostrar1(aluno a);
// mostra o conte�do do registro aluno apontado 
void Mostrar2(const aluno* pa);
// mostra o conte�do do vetor de alunos
void Mostrar3(const aluno va[], int n);

int main()
{
	system("chcp 1252 > nil");

	cout << "Tamanho da classe: ";
	int tam;
	cin >> tam;

	// remove \n para uso do cin.getline
	cin.ignore();

	aluno* ptr = new aluno[tam];
	int inscritos = PegarInfo(ptr, tam);
	for (int i = 0; i < inscritos; ++i)
	{
		Mostrar1(*(ptr + i));
		cout << endl;
		Mostrar2(ptr + i);
		cout << endl;
	}
	cout << endl;
	Mostrar3(ptr, inscritos);

	delete[] ptr;
	cout << "Feito!\n";
	return 0;
}

// solicita e armazena informa��es de alunos:
// - encerrando ao preencher o vetor ou quando o usu�rio 
// entrar com uma linha em branco para o nome do aluno
// - a fun��o retorna o n�mero de alunos lidos
int PegarInfo(aluno va[], int n)
{
	char nome[TAM_NOME]{};
	size_t i = 0;

	cout << "Aluno #" << i + 1;
	cout << endl;
	cout << "Nome aluno: ";
	cin.getline(nome, TAM_NOME);
	
	while (i < n && nome)
	{
		strcpy(va[i].nome, nome);
		cout << "N�vel aluno: ";
		cin >> va[i].nivel;
		cin.ignore();
		i++;

		cout << endl;
		

		if (i < n)
		{
			cout << "Aluno #" << i + 1;
			cout << endl;
			cout << "Nome aluno: ";
			cin.getline(nome, TAM_NOME);
		}
		
	}
	return i;
}

// mostra o conte�do de um registro aluno
void Mostrar1(aluno a) 
{
	cout << "Nome: " << a.nome;
	cout << endl;
	cout << "N�vel: " << a.nivel;
	cout << endl;
}

// mostra o conte�do do registro aluno apontado 
void Mostrar2(const aluno* pa)
{
	cout << "Nome: " << pa->nome;
	cout << endl;
	cout << "N�vel: " << pa->nivel;
	cout << endl;
}

// mostra o conte�do do vetor de alunos
void Mostrar3(const aluno va[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nome: " << va[i].nome;
		cout << endl;
		cout << "N�vel: " << va[i].nivel;
		cout << endl;
	}
}
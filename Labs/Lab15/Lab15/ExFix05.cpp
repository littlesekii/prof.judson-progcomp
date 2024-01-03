#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

enum class SIT_DISCIPLINA {
	APROVADO,
	TRANCADO,
	REPROVADO
};

const char SIT_DISCIPLINA_STR[3][10]{
	"Aprovado",
	"Trancado",
	"Reprovado"
};

struct aluno {
	union {
		char nome[101];
		unsigned int matricula;
	} cadastro;
	unsigned short codigoDisciplina;
	SIT_DISCIPLINA situacao;
};

void mostrarAluno(aluno*);

int main(void) {
	system("chcp 1252 > nil");

	cout << "Digite o número de alunos do vetor: ";

	unsigned short tam{};
	cin >> tam;

	aluno* alunos = new aluno[tam];

	cout << "Digite a matricula do aluno: ";
	cin >> alunos->cadastro.matricula;

	cout << "Digite o código da disciplina: ";
	cin >> alunos->codigoDisciplina;

	unsigned short codSituacao{};
	cout << "Digite a situacao do aluno: ";
	cin >> codSituacao;


	alunos->situacao = SIT_DISCIPLINA(codSituacao);

	cout << endl;
	mostrarAluno(alunos);
	cout << endl;

	delete[] alunos;

	return 0;
}

void mostrarAluno(aluno* a) {
	char output[101]{};
	sprintf(output,
		(
			"Aluno: %010d\n"
			"Código disciplina: %d\n"
			"Situação: %s" 
		),
		a->cadastro.matricula,
		a->codigoDisciplina,
		SIT_DISCIPLINA_STR[int(a->situacao)]
	);

	cout << output;
}
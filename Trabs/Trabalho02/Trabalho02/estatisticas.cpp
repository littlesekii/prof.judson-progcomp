#include <iostream>
#include "concurso.h"

using namespace std;

int main() 
{
	system("chcp 1252 > nil");

	printSeparator('*', 55);
	cout << "Concurso de Programa��o";
	cout << endl << endl;

	unsigned short qtdParticipantes;
	unsigned short qtdQuestoes;
	cout << "Qual o n�mero de participantes? ";
	cin >> qtdParticipantes;

	//cria o vetor dinamico dos participantes
	participante* participantes = new participante[qtdParticipantes];

	cout << "Qual o n�mero de quest�es? ";
	cin >> qtdQuestoes;

	//cria o vetor dinamico das quest�es
	questao* questoes = new questao[qtdParticipantes * qtdQuestoes];

	cout << endl;
	printSeparator('*', 55);

	//percorre cada participante
	for (size_t i {0}; i < qtdParticipantes; i++) 
	{
		participante* participanteAtual = (participantes + i);

		printSeparator('-', 13);
		//pergunta o nome do participante
		cout << "Participante: ";
		cin >> participanteAtual->nome;
		printSeparator('-', 13);

		//percorre cada quest�o
		for (size_t j{ 0 }; j < qtdQuestoes; j++)
		{
			questao* questaoAtual = (questoes + (qtdQuestoes * i) + j);

			cout << "Quest�o " << char(caracterePrimeiraQuestao + j) << endl;

			//pergunta a dificuldade
			cout << "\tDificuldade: ";
			unsigned short auxDificuldade;
			cin >> auxDificuldade;
			questaoAtual->dificuldade = (dificuldade)auxDificuldade;

			cout << "\tIn�cio: ";
			cin >> questaoAtual->inicio;
			cout << "\tFim: ";
			cin >> questaoAtual->fim;
		}
		
		participanteAtual -> questoes = (questoes + (qtdQuestoes * i));

		printSeparator('-', 13);
		cout << endl;
	}
	printSeparator('*', 55);
	
	printSeparator('-', 23);
	cout << "Resumo por Participante" << endl;
	printSeparator('-', 23);

	//RESUMO PARTICIPANTE
	//percorre cada participante
	for (size_t i{ 0 }; i < qtdParticipantes; i++)
	{
		participante* participanteAtual = (participantes + i);

		cout << participanteAtual->nome << ":\n";
		resumoParticipante(participanteAtual->questoes, qtdQuestoes);
	}
	printSeparator('-', 18);
	cout << endl;

	printSeparator('-', 18);
	cout << "Resumo por Quest�o" << endl;
	printSeparator('-', 18);

	//RESUMO QUEST�O 

	//percorre cada quest�o
	for (size_t i{ 0 }; i < qtdQuestoes; i++)
	{
		cout << "Quest�o " << char(caracterePrimeiraQuestao + i) << ":\n";

		//percorre cada participante
		for (size_t j{ 0 }; j < qtdParticipantes; j++)
		{
			participante* participanteAtual = (participantes + j);

			questao* questaoAtual = (questoes + (qtdQuestoes * j) + i);

			cout << "\t";
			cout << participanteAtual->nome;
			cout << " (" << int(questaoAtual->dificuldade) << ") ";
			cout << questaoAtual->inicio << " �s " << questaoAtual->fim;
			cout << " (" << questaoAtual->fim - questaoAtual->inicio << " min)";
			cout << endl;
		}
	}

	printSeparator('-', 18);
	cout << endl;

	printSeparator('-', 12);
	cout << "Estat�sticas" << endl;
	printSeparator('-', 12);

	//ESTAT�STICAS
	//percorre cada quest�o
	for (size_t i{ 0 }; i < qtdQuestoes; i++)
	{
		media media = retornaMedia(questoes, qtdQuestoes * qtdParticipantes, i, qtdQuestoes);
		cout << "Quest�o " << char(caracterePrimeiraQuestao + i) << ": ";
		cout << fixed;
		cout.precision(2);
		cout << "Dificuldade (" << media.dificuldade << ") - Tempo (" << media.tempo << " minutos)";
		cout << endl;
	}

	media media = retornaMedia(questoes, qtdQuestoes * qtdParticipantes, 0, 1);
	cout << "Concurso:  ";
	cout << "Dificuldade (" << media.dificuldade << ") - Tempo (" << media.tempo << " minutos)";
	cout << endl << endl;

	printSeparator('*', 55);

	delete[] participantes;
	delete[] questoes;

	return 0;
}
#pragma once
#include <iostream>

const char caracterePrimeiraQuestao{ 'A' };

enum class dificuldade 
{
	MUITO_FACIL = 1,
	FACIL,
	MEDIO,
	DIFICIL,
	MUITO_DIFICIL
};

struct horario 
{
	unsigned short horas;
	unsigned short minutos;
};

struct questao 
{
	dificuldade dificuldade;
	horario inicio;
	horario fim;
};

struct participante 
{
	char nome[101];
	questao* questoes;
};

struct media
{
	float dificuldade;
	float tempo;
};

//fun��o para ler o horario com o cin
std::istream& operator>>(std::istream&, horario&);

//fun��o para mostrar o horario com o cout
std::ostream& operator<<(std::ostream&, horario&);


//fun��o para pegar a diferen�a dos horarios em minutos

/// <summary>
///  Digita "///" em cima da fun��o
/// </summary>
/// <param name=""></param>
/// <param name=""></param>
/// <returns></returns>
short operator-(horario, horario);

//fun��o para o separador
void printSeparator(char, unsigned short);

media retornaMedia(questao*, unsigned short, unsigned short, unsigned short);

void resumoParticipante(questao*, unsigned short);
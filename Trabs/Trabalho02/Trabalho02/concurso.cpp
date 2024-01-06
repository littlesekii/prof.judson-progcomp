#define _CRT_SECURE_NO_WARNINGS
#include "concurso.h"
#include <iostream>

/// <summary>
///		Digita "///" em cima da função
/// </summary>
/// <param name="in"></param>
/// <param name="horario"></param>
/// <returns></returns>
std::istream& operator>>(std::istream& in, horario& horario) 
{
	in >> horario.horas;
	in.ignore();
	in >> horario.minutos;

	return in;
}

std::ostream& operator<<(std::ostream& out, horario& horario)
{
	char output[6];
	sprintf(output, "%02d:%02d", horario.horas, horario.minutos);

	out << output;

	return out;
}

short operator-(horario fim, horario inicio) 
{
	const unsigned short MINUTOS_HORA{ 60 };
	unsigned short diff{0};

	diff += (fim.horas - inicio.horas) * MINUTOS_HORA;
	diff += (fim.minutos - inicio.minutos);

	return diff;
}

void printSeparator(char c, unsigned short qtd)
{
	for (size_t i{ 0 }; i < qtd; i++)
		std::cout << c;
	std::cout << std::endl;
}

media retornaMedia(questao* questoes, unsigned short size, 
	unsigned short start, unsigned short iterator) 
{
	media media{};

	unsigned short count{};

	//percorre o array
	for (size_t i{ start }; i < size; i += iterator) 
	{
		questao* questaoAtual = questoes + i;
		//soma os valores
		media.dificuldade += int(questaoAtual->dificuldade);
		media.tempo += questaoAtual->fim - questaoAtual->inicio;
		count++;
	}

	media.dificuldade /= float(count);
	media.tempo /= count;

	return media;
}

void resumoParticipante(questao* questoes, unsigned short qtd) {

	for (size_t i{ 0 }; i < qtd; i++) 
	{
		questao* questaoAtual = questoes + i;

		std::cout << "\t";
		std::cout << char(caracterePrimeiraQuestao + i);
		std::cout << " (" << int(questaoAtual->dificuldade) << ") ";
		std::cout << questaoAtual->inicio << " às " << questaoAtual->fim;
		std::cout << " (" << questaoAtual->fim - questaoAtual->inicio << " min)";
		std::cout << std::endl;
	}
}
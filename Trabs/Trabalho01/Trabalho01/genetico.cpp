#include "genetico.h"
#include "binario.h"

bool avaliar(unsigned short);
unsigned short cruzamentoPontoUnico(unsigned short s1, unsigned short s2) {
	unsigned short result{ 0 };
	result = (bitsAltos(s1) << 8) + bitsBaixos(s2);

	return result;
}
unsigned short cruzamentoAritmetico(unsigned short s1, unsigned short s2) {
	unsigned short result{ 0 };
	result = bitCheckAND(s1, s2);

	return result;
}

unsigned short mutacaoSimples(unsigned short s) {
	unsigned short result{ 0 };
	if (testarBit(s, 9))
		result = desligarBit(s, 9);
	else
		result = ligarBit(s, 9);

	return result;
}
unsigned short mutacaoDupla(unsigned short s) {
	unsigned short result{ 0 };
	if (testarBit(s, 3))
		result = desligarBit(s, 3);
	else
		result = ligarBit(s, 3);

	if (testarBit(result, 12))
		result = desligarBit(result, 12);
	else
		result = ligarBit(result, 12);

	return result;
}

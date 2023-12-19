#include "genetico.h"
#include <iostream>
#include "binario.h"

bool avaliar(unsigned short s) {
	
	//peso
	short p0{ 1 }, p1{ 4 }, p2{ 2 }, p3{ 5 }, p4{ 4 }, p5{ 2 }, p6{ 1 }, p7{ 4 },
		p8{ 3 }, p9{ 2 }, p10{ 1 }, p11{ 9 }, p12{ 4 }, p13{ 5 }, p14{ 3 }, p15{ 12 };

	//valor
	short v0{ 12 }, v1{ 4 }, v2{ 3 }, v3{ 10 }, v4{ 15 }, v5{ 20 }, v6{ 10 }, v7{ 2 },
		v8{ 1 }, v9{ 1 }, v10{ 3 }, v11{ 15 }, v12{ 10 }, v13{ 8 }, v14{ 4 }, v15{ 4 };

	short totalPeso{ 0 }, totalValor{ 0 };

	if (testarBit(s, 0)) {
		totalPeso += p0;
		totalValor += v0;
	}
	if (testarBit(s, 1)) {
		totalPeso += p1;
		totalValor += v1;
	}
	if (testarBit(s, 2)) {
		totalPeso += p2;
		totalValor += v2;
	}
	if (testarBit(s, 3)) {
		totalPeso += p3;
		totalValor += v3;
	}
	if (testarBit(s, 4)) {
		totalPeso += p4;
		totalValor += v4;
	}
	if (testarBit(s, 5)) {
		totalPeso += p5;
		totalValor += v5;
	}
	if (testarBit(s, 6)) {
		totalPeso += p6;
		totalValor += v6;
	}
	if (testarBit(s, 7)) {
		totalPeso += p7;
		totalValor += v7;
	}

	if (testarBit(s, 8)) {
		totalPeso += p8;
		totalValor += v8;
	}

	if (testarBit(s, 9)) {
		totalPeso += p9;
		totalValor += v9;
	}

	if (testarBit(s, 10)) {
		totalPeso += p10;
		totalValor += v10;
	}

	if (testarBit(s, 11)) {
		totalPeso += p11;
		totalValor += v11;
	}

	if (testarBit(s, 12)) {
		totalPeso += p12;
		totalValor += v12;
	}

	if (testarBit(s, 13)) {
		totalPeso += p13;
		totalValor += v13;
	}

	if (testarBit(s, 14)) {
		totalPeso += p14;
		totalValor += v14;
	}

	if (testarBit(s, 15)) {
		totalPeso += p15;
		totalValor += v15;
	}

	
	std::cout << std::right;
	std::cout.width(5); 
	std::cout << s;

	std::cout << " - " << "$" << totalValor << " - ";
	
	std::cout << std::right;
	std::cout.width(2);
	std::cout << totalPeso << "Kg";

	std::cout << " - ";

	return totalPeso <= 20;
}

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

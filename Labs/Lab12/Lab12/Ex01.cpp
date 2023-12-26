#include <iostream>

struct complexo {
	float real;
	float imag;
};

complexo lerComplexo();
void mostrarComplexo(complexo);

complexo somaComplexos(complexo, complexo);
complexo produtoComplexos(complexo, complexo);

int main(void) {
	system("chcp 1252 > nil");

	std::cout << "Primeiro complexo: ";
	complexo cpx1 = lerComplexo();
	std::cout << "Segundo complexo: ";
	complexo cpx2 = lerComplexo();


	complexo cpxSoma = somaComplexos(cpx1, cpx2);
	std::cout << "A soma dos números: ";
	mostrarComplexo(cpxSoma);

	std::cout << std::endl;

	complexo cpxProduto = produtoComplexos(cpx1, cpx2);
	std::cout << "A multiplicacao dos números: ";
	mostrarComplexo(cpxProduto);

	return 0;
}

complexo lerComplexo() {
	complexo cpx;
	std::cin >> cpx.real;
	std::cin >> cpx.imag;
	std::cin.ignore();

	return cpx;
}

void mostrarComplexo(complexo cpx) {
	std::cout << cpx.real;
	std::cout << std::showpos;
	std::cout << cpx.imag;
	std::cout << std::noshowpos;
	std::cout << "i";
}


complexo somaComplexos(complexo cpx1, complexo cpx2) {
	complexo cpx { 
		cpx1.real + cpx2.real, 
		cpx1.imag + cpx2.imag 
	};

	return cpx;
}

complexo produtoComplexos(complexo cpx1, complexo cpx2) {
	complexo cpx{
		cpx1.real * cpx2.real - cpx1.imag * cpx2.imag,
		cpx1.imag * cpx2.real + cpx1.real * cpx2.imag
	};

	return cpx;
}
#include <iostream>

struct complexo {
	float real;
	float imag;
};

complexo lerComplexo();
void mostrarComplexo(complexo);

std::ostream& operator<<(std::ostream&, complexo&);
std::istream& operator>>(std::istream&, complexo&);

complexo operator+(complexo, complexo);
complexo operator*(complexo, complexo);

int main(void) {
	system("chcp 1252 > nil");

	std::cout << "Primeiro complexo: ";
	complexo cpx1;
	std::cin >> cpx1;
	std::cout << "Segundo complexo: ";
	complexo cpx2;
	std::cin >> cpx2;


	complexo cpxSoma = cpx1 + cpx2;
	std::cout << "A soma dos números: " << cpxSoma;


	std::cout << std::endl;

	complexo cpxProduto = cpx1 * cpx2;
	std::cout << "A multiplicacao dos números: " << cpxProduto;

	return 0;
}

std::ostream& operator<<(std::ostream& os, complexo& cpx) {
	os << cpx.real;
	os << std::showpos;
	os << cpx.imag;
	os << std::noshowpos;
	os << "i";

	return os;
}
std::istream& operator>>(std::istream& is, complexo& cpx) {
	is >> cpx.real;
	is >> cpx.imag;
	is.ignore();

	return is;
}

complexo operator+(complexo cpx1, complexo cpx2) {
	complexo cpx{
		cpx1.real + cpx2.real,
		cpx1.imag + cpx2.imag
	};

	return cpx;
}

complexo operator*(complexo cpx1, complexo cpx2) {
	complexo cpx{
		cpx1.real * cpx2.real - cpx1.imag * cpx2.imag,
		cpx1.imag * cpx2.real + cpx1.real * cpx2.imag
	};

	return cpx;
}
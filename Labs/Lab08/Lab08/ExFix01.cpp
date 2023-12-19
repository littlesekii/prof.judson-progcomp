#include <iostream>

using namespace std;

float imc(float, float);
double imc(double, double);

int main() {

	cout << "Float: " << imc(1.75f, 80.0f);
	cout << endl;
	cout << "Double: " << imc(1.75, 80.0);

	cout << endl;
	cout << endl;

	cout << fixed;
	cout.precision(10);
	cout << "Float: " << imc(1.75f, 80.0f);
	cout << endl;
	cout << "Double: " << imc(1.75, 80.0);


	return 0;
}

float imc(float altura, float massa) {
	return massa / (altura * altura);
}
double imc(double altura, double massa) {
	return massa / (altura * altura);
}

/*

b) o resultado float com 10 casas decimais tem uma precis�o menor do que o resultado double

c) o cout est� arrendondando a ultima casa decimal, 
o resultado obtido com valores float n�o � preciso a partir do 7� n�mero, ou seja, n�o est� correto

d) entendendo que o imc n�o depende de tanta precis�o, podemos utilizar o valor float sem probemas



*/

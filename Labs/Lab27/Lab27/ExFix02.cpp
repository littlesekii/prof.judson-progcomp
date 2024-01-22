#include <iostream>

using namespace std;

double calcular(double, double, double (*)(double, double));

double soma(double, double);
double sub(double, double);

int main()
{

	double (*metodo)(double, double);

	metodo = soma;

	cout << calcular(2.5, 10.3, metodo);
	cout << endl;

	metodo = sub;

	cout << calcular(2.5, 10.3, metodo);
	cout << endl;

	return 0;
}

double calcular(double x, double y, double (*metodo)(double, double))
{
	return (*metodo)(x, y);
}

double soma(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}
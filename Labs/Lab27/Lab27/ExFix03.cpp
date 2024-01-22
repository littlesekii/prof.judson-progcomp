#include <iostream>

using namespace std;

double calcular(double, double, double (*)(double, double));

inline double soma(double, double);
inline double sub(double, double);
inline double produto(double, double);
inline double div(double, double);

int main()
{
	double (*metodo[4])(double, double) {soma, sub, produto, div};

	for (size_t i = 0; i < 4; i++)
	{
		cout << calcular(10, 2, metodo[i]);
		cout << endl;
	}

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

double produto(double x, double y)
{
	return x * y;
}

double div(double x, double y)
{
	return x / y;
}
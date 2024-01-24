#include <iostream>

using namespace std;

struct tupla
{
	int a;
	int b;
	int c;
};

void trocar(tupla&, tupla&);

int main()
{
	system("chcp 1252 > nil");

	tupla x{ 15, 20, 25 };
	tupla y{ 40, 50, 60 };
	
	cout << "Tupla X: " << x.a << " " << x.b << " " << x.c;
	cout << endl;
	cout << "Tupla Y: " << y.a << " " << y.b << " " << y.c;

	cout << endl;
	cout << endl;
	trocar(x, y);
	cout << endl;
	cout << endl;

	cout << "Tupla X: " << x.a << " " << x.b << " " << x.c;
	cout << endl;
	cout << "Tupla Y: " << y.a << " " << y.b << " " << y.c;

	return EXIT_SUCCESS;
}

void trocar(tupla& x, tupla& y)
{
	tupla aux{ x.a, x.b, x.c };

	x.a = y.a;
	x.b = y.b;
	x.c = y.c;

	y.a = aux.a;
	y.b = aux.b;
	y.c = aux.c;	

	cout << "Invertendo...";
}
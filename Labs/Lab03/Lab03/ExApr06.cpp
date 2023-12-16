#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	float a, b, h, ab;
	cout << "Lado a: ";
	cin >> a;
	cout << "Lado b: ";
	cin >> b;

	ab = a * b;
	cout << "Área da base = " << ab << endl;

	cout << "Altura: ";
	cin >> h;

	cout << "Volume do prisma = " << ab * h;
}
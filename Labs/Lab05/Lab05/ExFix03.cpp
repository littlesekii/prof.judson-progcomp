#include <iostream>
#include <locale>
using namespace std;

float mediaHarmonica(float, float);

int main()
{
	system("chcp 1252 > nil");

	float x, y;
	cout << "Entre com um número: ";
	cin >> x;

	cout << "Entre com outro número: ";
	cin >> y;

	cout << "A média harmônica dos números é " << mediaHarmonica(x, y);
}

float mediaHarmonica(float x, float y) {
	return 2.0 * x * y / (x + y);
}

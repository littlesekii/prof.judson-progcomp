#include <iostream>
#include <locale>
using namespace std;

float mediaHarmonica(float, float);

int main()
{
	system("chcp 1252 > nil");

	float x, y;
	cout << "Entre com um n�mero: ";
	cin >> x;

	cout << "Entre com outro n�mero: ";
	cin >> y;

	cout << "A m�dia harm�nica dos n�meros � " << mediaHarmonica(x, y);
}

float mediaHarmonica(float x, float y) {
	return 2.0 * x * y / (x + y);
}

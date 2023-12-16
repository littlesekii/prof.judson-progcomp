#include <iostream>
#include <locale>
using namespace std;

float celsiusToFahrenheit(float);

int main()
{
	system("chcp 1252 > nil");

	float celsius;
	cout << "Digite uma temperatura em graus Celsius: ";
	cin >> celsius;

	cout << celsius << " graus Celsius equivalem a "
		<< celsiusToFahrenheit(celsius) << " graus Fahrenheit.";

}

float celsiusToFahrenheit(float celsius) {
	return 1.8 * celsius + 32.0;
}

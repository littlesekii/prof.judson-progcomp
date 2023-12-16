#include <iostream>
constexpr auto PI = 3.14159265;

using namespace std;

int main(void) {

	system("chcp 1252 > nil");

	int angolo;
	cout << "Digite um ângulo:" << endl;
	cin >> angolo;

	cout << "Seno = " << sin(angolo * PI / 180);

	return 0;
}
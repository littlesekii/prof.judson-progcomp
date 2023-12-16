#include <iostream>

using namespace std;

int main(void) {

	system("chcp 1252 > nil");

	int px, py, qx, qy;
	cout << "Ponto P:" << endl;
	cin >> px;
	cin >> py;

	cout << "Ponto Q:" << endl;
	cin >> qx;
	cin >> qy;

	float distance = sqrt(pow(qx - px, 2) + pow(qy - py, 2));

	cout << "A distância entre P e Q é: " << distance;

	return 0;
}
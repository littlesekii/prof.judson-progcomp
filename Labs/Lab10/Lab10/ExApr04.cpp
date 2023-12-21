#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	int vet[5] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i <= 4; i++) 
		vet[i] = 60;
	//vet[5000] = 60;

	return 0;
}
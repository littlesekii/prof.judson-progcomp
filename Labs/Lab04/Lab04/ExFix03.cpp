#include <iostream>

using namespace std;

void UmTres();
void Dois();

int main(void) {

	system("chcp 1252 > nil");

	cout << "Come�ando agora:" << endl;
	UmTres(); cout << endl;
	cout << "Pronto!";

	return 0;
}

void UmTres() {
	cout << "Um";
	cout << " ";
	Dois();
	cout << " ";
	cout << "Tr�s";
}

void Dois() {
	cout << "Dois";
}


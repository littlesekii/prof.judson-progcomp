#include <iostream>

using namespace std;

float tempoVolta(float);

int main()
{
	system("chcp 1252 > nil");

	float tempo{};

	cout << "Volta: ";
	while (cin >> tempo)
	{
		cout << "Tempo total = " << tempoVolta(tempo) << " segs.";
		cout << endl;
		cout << "Volta: ";
	}

	return EXIT_SUCCESS;
}

float tempoVolta(float tempo)
{
	static float tempoTotal{0};
	tempoTotal += tempo;

	return tempoTotal;
}
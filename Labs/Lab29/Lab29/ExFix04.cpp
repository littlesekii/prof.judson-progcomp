#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

template <typename T> T max5(const T[5]);

int main()
{
	system("chcp 1252 > nil");

	double d[5]{ 1.2, 3.4, 6.8, 0.2, 6.5 };
	int i[5]{ 1, 4, 8, 0, 6 };

	double rd = max5(d);
	int ri = max5(i);

	cout << rd;
	cout << endl;
	cout << ri;

	return 0;
}

template <typename T> T max5(const T vet[5])
{
	T maxValue = vet[0];

	for (size_t i = 1; i < 5; i++)
	{
		if (maxValue < vet[i])
			maxValue = vet[i];
	}
	return maxValue;
}
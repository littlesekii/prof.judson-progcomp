#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

template <typename T> T maxn(const T[], int size);

int main()
{
	system("chcp 1252 > nil");

	int i[6]{ 1, 4, 8, 0, 6, 10 };
	double d[4]{ 1.2, 3.4, 0.2, -6.5 };
	

	int ri = maxn(i, 6);
	double rd = maxn(d, 4);
	

	cout << ri;
	cout << endl;
	cout << rd;
	

	return 0;
}

template <typename T> T maxn(const T vet[], int size)
{
	T maxValue = vet[0];

	for (size_t i = 1; i < size; i++)
	{
		if (maxValue < vet[i])
			maxValue = vet[i];
	}
	return maxValue;
}
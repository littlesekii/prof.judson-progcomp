#include <iostream>

using namespace std;

int* uniao(const int*, const int*, int);

int main()
{
	system("chcp 1252 > nil");

	int v1[]{ 1, 4, 5, 7 };
	int v2[]{ 3 ,2, 8, 9 };

	int* u;

	u = uniao(v1, v2, 8);

	cout << "Vetor A: ";
	for (int i : v1)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "Vetor B: ";
	for (int i : v2)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "União: ";
	for (size_t i = 0; i < 8; i++)
	{
		cout << u[i] << " ";
	}

	delete[] u;

	return EXIT_SUCCESS;
}

int* uniao(const int* a, const int* b, int tam)
{
	int* u = new int[tam];

	for (size_t i = 0; i < tam / 2; i++)
	{
		u[i] = a[i];
		u[i + tam / 2] = b[i];
	}
	return u;
}

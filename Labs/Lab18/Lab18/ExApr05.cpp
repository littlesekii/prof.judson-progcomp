#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int age;
	int qtdMaiorIdade{ 0 };

	cin >> age;
	int maisVelha{ age };
	int maisNova{ age };
	

	while (age != 0)
	{		
		if (age > maisVelha)
			maisVelha = age;

		if (age < maisNova)
			maisNova = age;
		
		if (age >= 18)
			qtdMaiorIdade++;

		cin >> age;
	}

	cout << "Nesse grupo " << qtdMaiorIdade << " pessoas são maiores de idade.";
	cout << endl;
	cout << "Idade da pessoa mais velha: " << maisVelha;
	cout << endl;
	cout << "Idade da pessoa mais nova: " << maisNova;

	return 0;
}

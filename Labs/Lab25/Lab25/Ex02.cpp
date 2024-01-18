#include <iostream>
#include <fstream>

using namespace std;

float higherValue(const float*, size_t);

int main()
{
	system("chcp 1252 > nil");

	char fileName[31];
	cout << "Digite o nome do arquivo: ";
	cin >> fileName;

	ifstream fin;
	fin.open(fileName);
	if (!fin.is_open()) 
	{
		cout << "Falha ao abrir o arquivo. Encerrando o programa.";
		exit(EXIT_FAILURE);
	}

	int size{};

	float value{};

	while (fin >> value)
	{
		size++;
	}
	float* values = new float[size];
	
	fin.clear();
	fin.seekg(ios::beg);
	for (size_t i = 0; i < size; i++)
	{
		fin >> value;
		values[i] = value;
	}

	cout << "O maior valor é " << higherValue(values, size);

	fin.close();
	delete[] values;

	return EXIT_SUCCESS;
}

float higherValue(const float* values, size_t size) {

	float higher{};

	for (size_t i = 0; i < size; i++)
	{
		if (values[i] > higher)
			higher = values[i];
	}

	return higher;
}
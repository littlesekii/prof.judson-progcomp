#include <iostream>
#include <fstream>

int main() {

	std::ifstream fileReader;
	fileReader.open("sol.txt");
	if (!fileReader.is_open())
	{
		std::cout << "A abertura do arquivo sol.txt falhou!\n";
		std::cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}	

	std::ofstream fileWriter;
	fileWriter.open("num.txt");
	if (!fileWriter.is_open())
	{
		std::cout << "A abertura do arquivo num.txt falhou!\n";
		std::cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	int n;
	while (!fileReader.eof())
	{
		
		if (fileReader >> n)
		{	
			fileWriter << n << std::endl;
		}
		else {
			fileReader.clear();
			fileReader.ignore();
		}

	}

	fileReader.close();
	fileWriter.close();

	std::cout << "Pronto!";

	return 0;
}
#include <iostream>
#include <fstream>



int main() {

	std::ifstream fileReader;

	fileReader.open("texto.txt");

	if (!fileReader.is_open()) 
	{
		std::cout << "A abertura do arquivo falhou!\n";
		std::cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	//padrao
	char ch;
	fileReader >> ch;
	fileReader.seekg(std::ios::beg);

	//oitavo caractere 
	char oitavo;
	for (size_t i = 0; i < 8; i++)
	{
		fileReader.get(oitavo);
	}
	fileReader.seekg(std::ios::beg);

	//uma palavra 
	char palavra[11];
	fileReader >> palavra;
	fileReader >> palavra;
	fileReader.seekg(std::ios::beg);

	//a quinta palavra 
	char quintaPalavra[11];
	for (size_t i = 0; i < 5; i++)
	{
		fileReader >> quintaPalavra;
	}
	fileReader.seekg(std::ios::beg);

	//uma linha 
	char linha[101];
	fileReader.getline(linha, 101);


	fileReader.close();

	//padrao
	std::cout << "Primeira letra: " << ch << std::endl;

	//oitavo caractere
	std::cout << "Oitava letra: " << oitavo << std::endl;

	//uma palavra
	std::cout << "Uma palavra: " << palavra << std::endl;

	//a quinta palavra 
	std::cout << "A quinta palavra: " << quintaPalavra << std::endl;

	//uma linha
	std::cout << "Uma linha: " << linha << std::endl;
	return 0;
}
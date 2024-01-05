#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	constexpr size_t wordCount{ 5 };
	char* palavras[wordCount]{};
	size_t lenPalavras[wordCount]{};

	cout << "Digite " << wordCount << " palavras:\n";
	
	size_t charCount{ wordCount };
	for (size_t i = 0; i < wordCount; i++) {
		palavras[i] = new char[101];
		cin >> palavras[i];
		lenPalavras[i] = (charCount += strlen(palavras[i]), strlen(palavras[i]));
	}

	char* concateno = new char[charCount] {};

	for (size_t i = 0; i < wordCount; i++) {
		strcpy(concateno, palavras[i]);
		delete[] palavras[i];

		concateno += lenPalavras[i];

		if (i < wordCount - 1)
			strcpy(concateno++, " ");
	}

	concateno -= charCount - 1;
	cout << "Concatenando as palavras obtém-se:\n" << concateno << endl;

	delete[] concateno;

	system("Pause");

}
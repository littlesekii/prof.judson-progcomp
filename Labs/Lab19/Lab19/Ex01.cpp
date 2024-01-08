#include <iostream>

using namespace std;

int main() 
{
	cout << "Digite palavras (pronto para parar): ";

	
	char palavra[20]{};
	int cont{ 0 };
	for (
		(cin >> palavra); 
		strcmp("pronto", palavra); 
		(cont++, cin >> palavra)
	);

	cout << "Foram digitadas um total de " << cont << " palavras.";

}
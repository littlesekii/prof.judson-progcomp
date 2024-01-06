#include <iostream>

using namespace std;

struct login {
	char login[31];
	char senha[31];
};

int main()
{
	system("chcp 1252 > nil");

	login adm{ "littlesekii", "123" };

	char loginInput[31];
	char senhaInput[31];
	cout << "Informe o login: ";
	cin >> loginInput;
	cout << "Informe a senha: ";
	cin >> senhaInput;

	bool auth{ true };
	if (
		strlen(adm.login) == strlen(loginInput) &&
		strlen(adm.senha) == strlen(senhaInput)
	) 
	{ 
		for (size_t i{ 0 }; i < strlen(loginInput) && auth; i++) {
			auth = adm.login[i] == loginInput[i];
		}
		for (size_t i{ 0 }; i < strlen(senhaInput) && auth; i++) {
			auth = adm.senha[i] == senhaInput[i];
		}
	}
	else
		auth = false;

	cout << "Login e senha " << ((!auth) ? "in" : "") << "corretos.";



	return 0;
}
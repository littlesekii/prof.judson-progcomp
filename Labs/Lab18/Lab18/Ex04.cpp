#include <iostream>

using namespace std;

bool strEqual(const char*, const char*);

int main()
{
	char palavra[20] = "colegaa";
	if (strEqual("colega", palavra))
		cout << "Iguais" << endl;
	else
		cout << "Diferentes" << endl;

	return 0;
}

bool strEqual(const char* str1, const char* str2)
{
	if (strlen(str1) != strlen(str2))
		return false;

	bool isEqual{ true };

	int i{ 0 };
	while (isEqual && str1[i] != '\0') 
	{
		isEqual = str1[i] == str2[i];
		i++;
	}

	return isEqual;
}
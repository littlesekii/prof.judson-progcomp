#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const char* strreplace(const char*, const char*, const char*);

bool startsWith(const char* source, const char* searchexpr);
const char* strreplacev2(const char* source, const char* searchexpr, const char* replaceexpr);

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("base.cpp");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo base.cpp falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	ofstream fout;
	fout.open("base_m.cpp");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo base_m.cpp falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	fout << "// base_m.cpp" << endl;
	fout << "#define print cout" << endl;

	char line[100];
	while (fin.getline(line, 101))
	{
		strcpy(line, strreplacev2(line, "cout", "print"));
		fout << line << endl;
	}


	fin.close();
	fout.close();

	return EXIT_SUCCESS;
}

const char* strreplace(const char* source, const char* searchexpr, const char* replaceexpr)
{
	char result[1000]{};

	struct range {
		size_t start;
		size_t end;
	};

	//get the length of inputs
	int sourceLength = strlen(source);
	int searchstrLength = strlen(searchexpr);
	int replacestrLength = strlen(replaceexpr);

	//counts how many times the search expression matches the source
	int matchCount{};
	//iterate every source character
	for (size_t i = 0; i < sourceLength; i++)
	{
		//counts how many search expression characters matches the sources characters from its start
		int charMatchCount{};
		//iterate every search expression character while source its still in range
		for (size_t j = 0; j < searchstrLength && (i + j < sourceLength); j++)
		{
			//check if next source characters matches with search expression
			if (source[i + j] == searchexpr[j])
				charMatchCount++;
		}

		//check if search expression character match count equals its length
		if (charMatchCount >= searchstrLength)
			matchCount++;
	}

	//if dont have any match
	if (matchCount <= 0)
		return source;

	//allocate memory to save ranges where the matches occurs
	range* ranges = new range[matchCount];

	matchCount = 0;
	//iterate every source character
	for (size_t i = 0; i < sourceLength; i++)
	{
		//counts how many search expression characters matches the sources characters from its start
		int charMatchCount{};
		//iterate every search expression character while source its still in range
		for (size_t j = 0; j < searchstrLength && (i + j < sourceLength); j++)
		{
			//check if next source characters matches with search expression
			if (source[i + j] == searchexpr[j])
				charMatchCount++;
		}

		//check if search expression character match count equals its length
		if (charMatchCount >= searchstrLength)
		{
			//stores the range where match occurs and increase match count
			ranges[matchCount] = { i, i + searchstrLength - 1 };
			matchCount++;
		}

	}

	//concatenate the first characters
	for (size_t i = 0; i < ranges->start; i++)
	{
		char c[]{ source[i], '\0' };
		strcat(result, c);
	}

	//build the result with the replace expression
	for (size_t i = 0; i < matchCount; i++)
	{

		//concat the replace expression
		strcat(result, replaceexpr);

		//get the range of the existing text from source
		size_t currentRange = (ranges + i)->end + 1;
		size_t nextRange = (ranges + i + 1)->start;

		//concat every char inside the range
		for (size_t j = currentRange; j < nextRange && (i + 1 < matchCount); j++)
		{
			char c[]{ source[j], '\0' };
			strcat(result, c);
		}
	}

	//concatenate the last characters
	for (size_t i = (ranges + matchCount - 1)->end + 1; i < sourceLength; i++)
	{
		char c[]{ source[i], '\0' };
		strcat(result, c);
	}

	delete[] ranges;

	return result;
}

bool startsWith(const char* source, const char* searchexpr)
{
	//if searchexpr length is greater than source
	if (strlen(searchexpr) > strlen(source))
		return false;

	//iterate every search character
	for (size_t i = 0; i < strlen(searchexpr); i++)
		//if character does not match
		if (source[i] != searchexpr[i])
			return false;

	return true;
}

const char* strreplacev2(const char* source, const char* searchexpr, const char* replaceexpr)
{
	char result[1001]{};

	size_t i = 0;

	//while its not the end of the source
	while (source[i])
	{
		//if current char of source is different from searchexpr's first 
		//or if from current address onward starts with the search expression
		if (source[i] != searchexpr[0] ||!startsWith((source + i), searchexpr))
		{
			//concat the current char to the result and move current adress to the next character
			char c[]{ source[i++], '\0' };
			strcat(result, c);
		}
		else
		{
			//concat the replace expression
			strcat(result, replaceexpr);
			//move current address 
			i += strlen(searchexpr);
		}
	}

	return result;
}
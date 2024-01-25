#include <iostream>

using namespace std;

void print(int v);
void print(double v);
void print(const char* v);


int main()
{
	cout << "Inteiro: ";
	print(45);
	cout << "\nPonto-flutuante: ";
	print(3.9);
	cout << "\nString: ";
	print("Oi Mundo");
	cout << "\n";
}

void print(int v)
{
	cout << "\033[93m";
	cout << v;
	cout << "\033[m";
}
void print(double v)
{
	cout << "\033[36m";
	cout << v;
	cout << "\033[m";
}
void print(const char* v) 
{
	cout << "\033[91m";
	cout << v;
	cout << "\033[m";
}
struct teste {
	int a;
};

#include <iostream>

int main() {
	teste testes[10]{ {1}, {3} };
	
	std::cout << (testes+1)->a;

	return 0;
}
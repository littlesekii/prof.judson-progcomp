#include <iostream>

using namespace std;

enum class CATEGORIA {
    INVALIDO,
    INFANTIL,
    JUVENIL,
    ADOLESCENTE,
    ADULTO,
    SENIOR
};

struct nadador
{
    char nome[61];
    int idade;
    CATEGORIA categoria;
};

CATEGORIA determinarCategoria(int idade);

int main()
{
    system("chcp 1252 > nil");

    nadador n{};

    cin >> n.nome;
    cin >> n.idade;
    n.categoria = determinarCategoria(n.idade);

    return 0;
}

CATEGORIA determinarCategoria(int idade) {
    if (idade >= 5 && idade <= 7) {
        return CATEGORIA::INFANTIL;
    }
    else if (idade >= 8 && idade <= 10) {
        return CATEGORIA::JUVENIL;
    }
    else if (idade >= 11 && idade <= 15) {
        return CATEGORIA::ADOLESCENTE;
    }
    else if (idade > 15 && idade <= 30) {
        return CATEGORIA::ADULTO;
    }
    else if (idade > 30) {
        return CATEGORIA::SENIOR;
    }
    else {
        return CATEGORIA::INVALIDO;
    }
}
#include <iostream>
using namespace std;

int main() {
    system("chcp 1252 > nil");
    // Declara um array de 12 linhas e 10 colunas
    const char* meses[12] {
      "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
      "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    int vendas[3][12]{};
    int vendasAno[3]{};
    int totalVendas{ 0 };

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Digite o número de livros vendidos no " << i+1 << "° ano: \n";
        // Imprime o nome de cada mês
        for (int j = 0; j < 12; j++) {
            cout << meses[j] << ": ";
            cin >> vendas[i][j];
            vendasAno[i] += vendas[i][j];
        }
        totalVendas += vendasAno[i];
        cout << endl;
    }

    cout << "Total de vendas\n";
    for (size_t i = 0; i < 3; i++)
        cout << i + 1 << "º ano: " << vendasAno[i] << endl;

    cout << "Nos três anos foram vendidos " << totalVendas << " livros";
    return 0;
}

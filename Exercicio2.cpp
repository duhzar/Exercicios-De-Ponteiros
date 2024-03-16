#include <iostream>
#include <string>

using namespace std;

struct Produto {
    string Nome;
    float Preco;
    int QuantidadeEstoque;
};

int main() {

    Produto* produtos = new Produto[10];

for (int i = 0; i < 10; i++) {
        cout << "Digite o nome do produto " << i + 1 << ": ";
        getline(cin, produtos[i].Nome);

        cout << "Digite o preco do produto " << i + 1 << ": ";
        cin >> produtos[i].Preco;

        cout << "Digite a quantidade em estoque do produto " << i + 1 << ": ";
        cin >> produtos[i].QuantidadeEstoque;

        cin.ignore();
    }

    for (int i = 0; i < 10; i++) {
        cout << "Produto " << i + 1 << ":" << endl;
        cout << "Nome: " << produtos[i].Nome << endl;
        cout << "Preco: " << produtos[i].Preco << endl;
        cout << "Quantidade em Estoque: " << produtos[i].QuantidadeEstoque << endl << endl;
    }

    
    delete[] produtos;

    return 0;
}
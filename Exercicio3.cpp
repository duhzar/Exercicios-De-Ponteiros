#include <iostream>
#include <string>

using namespace std;


struct Funcionario {
    string Nome;
    string Cargo;
    int Idade;
    int IdFunc;
    float Salario;
};

int main() {

    int numFuncionarios = 2;

    
    Funcionario* funcionarios = new Funcionario[numFuncionarios];

    
    for (int i = 0; i < numFuncionarios; i++) {
        cout << "Funcionario " << i + 1 << endl;
        cout << "Nome: ";
        cin >> funcionarios[i].Nome;
        cout << "Cargo: ";
        cin >> funcionarios[i].Cargo;
        cout << "Idade: ";
        cin >> funcionarios[i].Idade;
        cout << "Numero de Identificacao: ";
        cin >> funcionarios[i].IdFunc;
        cout << "Salario: ";
        cin >> funcionarios[i].Salario;
        cout << endl;
    }

    
    cout << "Dados dos Funcionarios:" << endl;
    for (int i = 0; i < numFuncionarios; i++) {
        cout << "Funcionario " << i + 1 << ":" << endl;
        cout << "Nome: " << funcionarios[i].Nome << endl;
        cout << "Cargo: " << funcionarios[i].Cargo << endl;
        cout << "Idade: " << funcionarios[i].Idade << endl;
        cout << "Numero de Identificacao: " << funcionarios[i].IdFunc << endl;
        cout << "Salario: " << funcionarios[i].Salario << endl;
        cout << endl;
    }

   
    delete[] funcionarios;

    return 0;
}
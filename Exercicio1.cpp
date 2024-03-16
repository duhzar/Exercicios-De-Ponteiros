#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nomeCompleto;
    int idade;
    float mediaFinal;
};

int main() {
   
    Aluno aluno;
    
    cout << "Digite o nome completo do estudante: ";
    cin>> aluno.nomeCompleto;

    cout << "Digite a idade do estudante: ";
    cin >> aluno.idade;

    cout << "Digite a média final do estudante: ";
    cin >> aluno.mediaFinal;

    cout << "\nDados do estudante:" << endl;
    cout << "Nome completo: " << aluno.nomeCompleto << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Média final: " << aluno.mediaFinal << endl;

    return 0;
}

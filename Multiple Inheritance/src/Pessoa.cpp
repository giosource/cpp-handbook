#include <iostream>

#include "../include/Pessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa() {
}
Pessoa::Pessoa(string nome, string cpf) {
    this->nome = nome;
    this->cpf = cpf;
}

string Pessoa::Getnome() { return nome; };
void Pessoa::Setnome(string v) { nome = v; };

string Pessoa::Getcpf() { return cpf; };
void Pessoa::Setcpf(string v) { cpf = v;};


void Pessoa::lerPessoa() {
    cout << "Digite o nome:\n";
    cin >> nome;
    cout << "\nDigite o CPF:\n";
    cin >> cpf;
};

void Pessoa::exibirPessoa() {
    cout << "NOME: " << nome << "\nCPF: " << cpf << "\n";
};
#include <iostream>

#include "../include/Fornecedor.h"

using namespace std;

Fornecedor::Fornecedor() {
}
Fornecedor::Fornecedor(double saldoFornecedor) {
    this->saldoFornecedor = saldoFornecedor;
}

double Fornecedor::GetsaldoFornecedor() { return saldoFornecedor; };
void Fornecedor::SetsaldoFornecedor(double v) { saldoFornecedor = v; };


void Fornecedor::fornecer(double valor) {
    SetsaldoFornecedor(GetsaldoFornecedor() + valor);
};

void Fornecedor::receber(double valor) {
    SetsaldoFornecedor(GetsaldoFornecedor() - valor);
};


void Fornecedor::lerFornecedor() {

    Pessoa::lerPessoa();
    cout << "\nDigite o saldo do fornecedor:\n";
    cin >> saldoFornecedor;
};
void Fornecedor::exibirFornecedor() {

    Pessoa::exibirPessoa();
    cout << "\nSALDO DO FORNECEDOR: " << saldoFornecedor << "\n";
};
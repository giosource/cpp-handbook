#include <iostream>

#include "../include/Cliente.h"
#include <string>

using namespace std;

Cliente::Cliente() {
}
Cliente::Cliente(double limiteCredito, double saldoDevedor) {
    this->limiteCredito = limiteCredito;
    this->saldoDevedor = saldoDevedor;
}

double Cliente::GetlimiteCredito() { return limiteCredito; };
void Cliente::SetlimiteCredito(double v) { limiteCredito = v; };

double Cliente::GetsaldoDevedor() { return saldoDevedor; };
void Cliente::SetsaldoDevedor(double v) { saldoDevedor = v;};


void Cliente::comprar(double valor) {
    SetsaldoDevedor(GetsaldoDevedor() + valor);
};

void Cliente::vender(double valor) {
    SetsaldoDevedor(GetsaldoDevedor() - valor);
};
void Cliente::lerCliente() {
    Pessoa::lerPessoa();
    cout << "Digite o limite de credito:\n";
    cin >> limiteCredito;
    cout << "\nDigite o saldo devedor:\n";
    cin >> saldoDevedor;
};
void Cliente::exibirCliente() {
    Pessoa::exibirPessoa();
    cout << "\nLIMITE DE CREDITO:" << limiteCredito << "\n";
    cout << "SALDO DEVEDOR:\n" << saldoDevedor << "\n";
};
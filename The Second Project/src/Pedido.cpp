#include "../include/Pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido() {
}
Pedido::Pedido(Cliente cliente, string data, vector<PedidoItem> itens) {
    this->cliente = cliente;
    this->data = data;
    this->itens = itens;
}

Cliente Pedido::Getcliente() { return cliente; };
void Pedido::Setcliente(Cliente v) { cliente = v; };

string Pedido::Getdata() { return data; };
void Pedido::Setdata(string v) { data = v; };

vector<PedidoItem> Pedido::GetpedidoItem() { return itens; };
void Pedido::SetpedidoItem(vector<PedidoItem> v) { itens = v; };

void Pedido::mostrarPedido() {
    cout << "NOME DO CLIENTE: " << Getcliente().Getnome() << "\n"
    << "DATA: " << Getdata() << "\n"
;
};


void Pedido::adicionarItem(PedidoItem item) {
    itens.push_back(item);
}

double Pedido::Gettotalpedido() {
    double total = 0;

    for (PedidoItem item : itens) {
        total +=  item.Getquantidade() * (item.Getproduto().Getpreco() - (item.Getproduto().Getpreco() * (item.Getdesconto() / 100)));
    }

    cout << "TOTAL DO PEDIDO: " << total << "\n";
    return total;
}
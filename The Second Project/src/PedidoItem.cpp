#include "../include/PedidoItem.h"
#include <iostream>

using namespace std;

PedidoItem::PedidoItem() {
}
PedidoItem::PedidoItem(Produto produto, double quantidade, double desconto) {
    this->produto = produto;
    this->quantidade = quantidade;
    this->desconto = desconto;
}

Produto PedidoItem::Getproduto() { return produto; };
void PedidoItem::Setproduto(Produto v) { produto = v; };

double PedidoItem::Getquantidade() { return quantidade; };
void PedidoItem::Setquantidade(double v) { quantidade = v; };

double PedidoItem::Getdesconto() { return desconto; };
void PedidoItem::Setdesconto(double v) { desconto = v; };

void PedidoItem::mostrarPedidoItem() {
    cout << "NOME DO PRODUTO: " << Getproduto().Getnome() << "\n"
    << "QUANTIDADE: " << Getquantidade() << "\n"
    << "DESCONTO: " << Getdesconto() << "\n"
    ;
 };

double PedidoItem::Gettotal() {
    double total = 0;
    total = Getquantidade() * (produto.Getpreco() - (produto.Getpreco() * (Getdesconto() / 100)));
    cout << "TOTAL:" << total << "\n";
    return total;
}
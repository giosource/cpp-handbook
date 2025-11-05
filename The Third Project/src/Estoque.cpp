#include "../include/Estoque.h"
#include <iostream>

using namespace std;

Estoque::Estoque () {

}

Estoque::Estoque(map<int, Produto> produtos) {
    this->produtos = produtos;
}

map<int, Produto> Estoque::getProdutos() {
    return produtos;
};
void Estoque::setProdutos(map<int, Produto> v) {
    produtos = v;
};

void Estoque::cadastrar_produto(int id, Produto produto) {
    produtos[id] = produto;
};
void Estoque::listar_estoque() {
    double valor_total = 0;

    cout << "\nESTOQUE";
    for (const auto& p : produtos) {
        cout
        << "\nID: " << p.first
        << "\nNOME: " << p.second.getNome()
        << "\nPRECO: " << p.second.getPreco()
        << "\nQUANTIDADE: " << p.second.getQuantidade();

        valor_total += p.second.getPreco() * p.second.getQuantidade();
    }

    cout << "\nVALOR TOTAL: " << valor_total << endl;
};
void Estoque::remover_produto(int id) {
    produtos.erase(id);
};
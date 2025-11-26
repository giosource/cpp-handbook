#include "../include/RangeErrorCustom.h"
#include "../include/Produto.h"
#include <iostream>

using namespace std;

Produto::Produto() {
}
Produto::Produto(string nome, double preco, int quantidade) {
    this->nome = nome;
    this->preco = preco;
    this->quantidade = quantidade;
}

string Produto::getNome()const { return nome; };
void Produto::setNome(string v) { nome = v;};

double Produto::getPreco() const { return preco; };
void Produto::setPreco(double v) { preco = v; };

int Produto::getQuantidade() const { return quantidade; };
void Produto::setQuantidade(int v) { 
    if (v >= 0)
        quantidade = v;
    else
        throw RangeErrorCustom("ESTOQUE NÃO PODE SER MENOR QUE 0");
};

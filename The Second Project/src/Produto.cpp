#include "../include/Produto.h"
#include <iostream>

using namespace std;

Produto::Produto() {
}
Produto::Produto(int id, string nome, double preco) {
    this->id = id;
    this->nome = nome;
    this->preco = preco;
}

int Produto::Getid() { return id; };
void Produto::Setid(int v) { id = v; };

string Produto::Getnome() { return nome; };
void Produto::Setnome(string v) { nome = v;};

double Produto::Getpreco() { return preco; };
void Produto::Setpreco(double v) { preco = v; };

void Produto::mostrarProduto() {
    cout << "ID: " << Getid() << "\n"
    << "NOME: " << Getnome() << "\n"
    << "PRECO: " << Getpreco() << "\n"
    ;
 };
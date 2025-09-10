#include "../include/Item.h"
#include <iostream>

using namespace std;
Item::Item() {
}
Item::Item(string nome, string tipo, double valor) {
    this->nome = nome;
    this->tipo = tipo;
    this->valor = valor;
}
Item::~Item() {
}
string Item::Getnome() { return nome; }
void Item::Setnome(string v) { nome = v; }
string Item::Gettipo() { return tipo; }
void Item::Settipo(string v) { tipo = v; }
double Item::Getvalor() { return valor; }
void Item::Setvalor(double v) { valor = v; }
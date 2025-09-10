#include "../include/Magia.h"
#include <iostream>

using namespace std;
Magia::Magia() {
}
Magia::Magia(string nome, int custoMana, int dano) {
    this->nome = nome;
    this->custoMana = custoMana;
    this->dano = dano;
}
Magia::~Magia() {
}
string Magia::Getnome() { return nome; }
void Magia::Setnome(string v) { nome = v; }
int Magia::GetcustoMana() { return custoMana; }
void Magia::SetcustoMana(int v) { custoMana = v; }
int Magia::Getdano() { return dano; }
void Magia::Setdano(int v) { dano = v; }
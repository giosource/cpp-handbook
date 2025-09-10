#include "../include/Jogador.h"
#include <iostream>

using namespace std;
Jogador::Jogador() {
}
Jogador::Jogador(string nome, int pontos) {
    this->nome = nome;
    this->pontos = pontos;
}
Jogador::~Jogador() {
}
string Jogador::Getnome() { return nome; }
void Jogador::Setnome(string v) { nome = v; }
int Jogador::Getpontos() { return pontos; }
void Jogador::Setpontos(int v) { pontos = v; }

void Jogador::ganharPontos(Jogador& j, int p) {
    j.Setpontos(j.Getpontos() + p);
}
void Jogador::perderPontos(Jogador& j, int p) {
    j.Setpontos(j.Getpontos() - p);
}

void Jogador::mostrarPontuacao() {
    cout << Getpontos() << " de pontos para " << Getnome() << endl;
}
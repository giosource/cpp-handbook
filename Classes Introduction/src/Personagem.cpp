#include "../include/Personagem.h"
#include <iostream>

using namespace std;
Personagem::Personagem() {
}
Personagem::Personagem(string nome, int vida, int forca, int nivel) {
    this->nome = nome;
    this->vida = vida;
    this->forca = forca;
    this->nivel = nivel;
}
Personagem::~Personagem() {
}
string Personagem::Getnome() { return nome; }
void Personagem::Setnome(string v) { nome = v; }
int Personagem::Getvida() { return vida; }
void Personagem::Setvida(int v) { vida = v; }
int Personagem::Getforca() { return forca; }
void Personagem::Setforca(int v) { forca = v; }
int Personagem::Getnivel() { return nivel; }
void Personagem::Setnivel(int v) { nivel = v; }
void Personagem::atacar(Personagem& p) {
    p.Setvida(p.Getvida() - this->forca);
    cout << p.Getvida() << " de vida para " << p.Getnome() << endl;
}
void Personagem::receberDano(Personagem& p) {
    Setvida(this->vida - p.Getforca());
    if (this->vida <= 0) {
        this->vida = 0;
    }
}
void Personagem::subirNivel() {
    this->nivel++;
}

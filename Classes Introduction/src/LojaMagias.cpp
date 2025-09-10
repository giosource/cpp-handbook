#include "../include/LojaMagias.h"
#include "../include/Magia.h"
#include <iostream>
#include <list>

using namespace std;
LojaMagias::LojaMagias() {
}
LojaMagias::LojaMagias(list<Magia> magias) {
    this->magias = magias;
}
LojaMagias::~LojaMagias() {
}
list<Magia> LojaMagias::Getmagias() { return magias; }
void LojaMagias::Setmagias(list<Magia> v) { magias = v; }
void LojaMagias::listarMagias() {
    for (Magia magia : magias)
        cout << "Nome: " << magia.Getnome() << endl
        << "Custo de mana: " << magia.GetcustoMana()
        << "Dano: " << magia.Getdano() << endl;
}
void LojaMagias::comprarMagia(string nome) {
    // Jogador nao tem LojaMagias.
}
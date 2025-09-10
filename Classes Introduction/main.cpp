#include <iostream>
#include "include/Personagem.h"
#include "include/Jogador.h"
#include "include/Item.h"
#include "include/Inventario.h"
#include "include/Carro.h"
#include "include/Magia.h"
// #include "include/LojaMagias.h"
#include <list>
using namespace std;

int main() {
    Personagem p1("Kuro", 10, 1, 1);
    Personagem p2("Mob", 10, 2, 2);
    Jogador j1("Kuro", 10);
    Jogador j2("Mob", 20);
    Item i1("Pao", "Alimento", 1.00);
    Item i2("Arco", "Arma", 300.00);
    Inventario inv;
    double t = 0;
    Carro c1("HB20", 100, 2000);
    Carro c2("Uno", 50, 2000);
    Magia m1("Invisibilidade", 30, 0);
    Magia m2("Paralisia de Mob", 50, 0);
    list<Magia> magias;
    magias.push_back(m1);
    magias.push_back(m2);
    // LojaMagias lojaM(magias);
    p1.atacar(p2);
    (j1.Getpontos() > j2.Getpontos()) ? (j1.mostrarPontuacao()) : (j2.mostrarPontuacao());
    inv.adicionarItem(i1);
    inv.adicionarItem(i2);
    inv.listarItens();
    for (Item item : inv.Getitens())
        t += item.Getvalor();
    cout << "Valor total do inventario: " << t << endl;
    for (int i = 0; i < 5; i++) {
        c1.acelerar();
        c2.acelerar();
        c1.mover();
        c2.mover();
    }
    c1.mostrarStatus();
    c2.mostrarStatus();
    // lojaM.listarMagias();
    return 0;
}
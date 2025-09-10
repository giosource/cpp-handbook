#include "../include/Inventario.h"
#include "../include/Item.h"
#include <iostream>
#include <list>

using namespace std;
Inventario::Inventario() {
}
Inventario::Inventario(list<Item> itens) {
    this->itens = itens;
}
Inventario::~Inventario() {
}
list<Item> Inventario::Getitens() { return itens; }
void Inventario::Setitens(list<Item> v) { itens = v; }
void Inventario::adicionarItem(Item item) {
    itens.push_back(item);
}
void Inventario::removerItemPorNome(string nome){
     itens.remove_if([&](Item& item) {
        return item.Getnome() == nome;
    });
}
void Inventario::listarItens(){
    for (Item item : itens)
    cout << "Nome: " << item.Getnome() << endl << "Tipo: " << item.Gettipo() << endl << "Valor: " << item.Getvalor() << endl;
}
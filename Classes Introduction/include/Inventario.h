#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <string>
#include <list>
#include "Item.h"
using namespace std;

class Inventario {
	public:
		Inventario();
		Inventario(list<Item> itens);
		virtual ~Inventario();
		list<Item> Getitens();
		void Setitens(list<Item> v);
		void adicionarItem(Item item);
		void removerItemPorNome(string nome);
		void listarItens();
	protected:
	private:
		list<Item> itens;
};
#endif // INVENTARIO_H
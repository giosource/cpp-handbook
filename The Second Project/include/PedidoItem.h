#ifndef PEDIDOITEM_H
#define PEDIDOITEM_H

#include <string>
#include "Produto.h"

using namespace std;

class PedidoItem {
	public:
		PedidoItem();
		PedidoItem(Produto produto, double quantidade, double desconto);
		Produto Getproduto();
		void Setproduto(Produto v);
		double Getquantidade();
		void Setquantidade(double v);
		double Getdesconto();
		void Setdesconto(double v);
		void mostrarPedidoItem();
		double Gettotal();
	protected:
	private:
        Produto produto;
		double quantidade;
		double desconto;
};

#endif // PEDIDOITEM_H

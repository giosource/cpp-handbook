#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
#include <vector>
#include "Cliente.h"
#include "PedidoItem.h"

using namespace std;

class Pedido {
	public:
		Pedido();
		Pedido(Cliente cliente, string data, vector<PedidoItem> itens);
		
		Cliente Getcliente();
		void Setcliente(Cliente v);
		
		string Getdata();
		void Setdata(string v);

		vector<PedidoItem> GetpedidoItem();
		void SetpedidoItem(vector<PedidoItem> v);
		
		void mostrarPedido();
		void adicionarItem(PedidoItem item);
		double Gettotalpedido();

	protected:
	private:
        Cliente cliente;
		string data;
		vector<PedidoItem> itens;
};

#endif // PEDIDO_H

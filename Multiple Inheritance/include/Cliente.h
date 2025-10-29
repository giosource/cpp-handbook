#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.h"

using namespace std;

class Cliente : private Pessoa {
	public:
		Cliente();
		Cliente(double limiteCredito, double saldoDevedor);
        double GetlimiteCredito();
		void SetlimiteCredito(double v);

		double GetsaldoDevedor();
		void SetsaldoDevedor(double v);

        void comprar(double valor);
        void vender(double valor);

		void lerCliente();
		void exibirCliente();

	protected:
	private:
        double limiteCredito;
		double saldoDevedor;
};

#endif // CLIENTE_H
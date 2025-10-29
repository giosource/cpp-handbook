#ifndef FORNECEDOR_H
#define FORNECEDOR_H

#include "Pessoa.h"

using namespace std;

class Fornecedor : private Pessoa {
	public:
		Fornecedor();
		Fornecedor(double saldoFornecedor);
        double GetsaldoFornecedor();
		void SetsaldoFornecedor(double v);

        void fornecer(double valor);
        void receber(double valor);

		void lerFornecedor();
		void exibirFornecedor();

	protected:
	private:
        double saldoFornecedor;
};

#endif // FORNECEDOR_H
#ifndef PARCEIROCOMERCIAL_H
#define PARCEIROCOMERCIAL_H

#include "Cliente.h"
#include "Fornecedor.h"

using namespace std;

class ParceiroComercial : private Cliente, private Fornecedor {
	public:
		ParceiroComercial();

		void lerParceiroComercial();
		void exibirParceiroComercial();
	protected:
	private:
};

#endif // PARCEIROCOMERCIAL_H
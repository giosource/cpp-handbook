#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <string>
#include <list>
#include "Magia.h"
using namespace std;

class LojaMagias {
	public:
		LojaMagias();
		LojaMagias(list<Magia> magias);
		virtual ~LojaMagias();
		list<Magia> Getmagias();
		void Setmagias(list<Magia> v);
		void listarMagias();
		void comprarMagia(string nome);
	protected:
	private:
		list<Magia> magias;
};
#endif // INVENTARIO_H
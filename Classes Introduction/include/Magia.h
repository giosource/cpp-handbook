#ifndef MAGIA_H
#define MAGIA_H

#include <string>

using namespace std;

class Magia {
	public:
		Magia();
		Magia(string nome, int custoMana, int dano);
		virtual ~Magia();
		string Getnome();
		void Setnome(string v);
		int GetcustoMana();
		void SetcustoMana(int v);
		int Getdano();
		void Setdano(int v);
	protected:
	private:
		string nome;
		int custoMana;
		int dano;
};
#endif // MAGIA_H
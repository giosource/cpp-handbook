#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item {
	public:
		Item();
		Item(string nome, string tipo, double valor);
		virtual ~Item();
		string Getnome();
		void Setnome(string v);
		string Gettipo();
		void Settipo(string v);
		double Getvalor();
		void Setvalor(double v);
	protected:
	private:
		string nome;
		string tipo;
		double valor;
};
#endif // ITEM_H
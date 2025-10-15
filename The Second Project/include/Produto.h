#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

using namespace std;

class Produto {
	public:
		Produto();
		Produto(int id, string nome, double preco);
        int Getid();
        void Setid(int v);
		string Getnome();
		void Setnome(string v);
		double Getpreco();
		void Setpreco(double v);
		void mostrarProduto();
	protected:
	private:
        int id;
		string nome;
		double preco;
};

#endif // PRODUTO_H
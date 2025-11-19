#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

using namespace std;

class Produto {
	public:
		Produto();
		Produto(string nome, double preco, int quantidade);

		string getNome() const;
		void setNome(string v);
		
		double getPreco() const;
		void setPreco(double v);
        
		int getQuantidade() const;
        void setQuantidade(int v);
	protected:
	private:
		string nome;
		double preco;
        int quantidade;
};

#endif // PRODUTO_H

#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Produto.h"
#include <map>
#include <iostream>
#include <fstream>

using namespace std;

class Estoque {
    public:
        Estoque();
        Estoque(map<int, Produto> produtos);

        map<int, Produto> getProdutos();
        void setProdutos(map<int, Produto> v);

        void cadastrar_produto(int id, Produto produto);
        void listar_estoque();
        void remover_produto(int id);
        double valor_estoque();
    protected:
    private:
        map<int, Produto> produtos;
};
#endif // ESTOQUE_H
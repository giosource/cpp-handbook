#include <iostream>

#include "include/Produto.h"
#include "include/Estoque.h"

using namespace std;

int main() {
    Produto produto1("PRODUTO 1", 20.00, 2);
    Produto produto2("PRODUTO 2", 30.00, 3);
    Produto produto3("PRODUTO 3", 50.00, 5);
    map<int, Produto> produtos = { {1, produto1}, {2, produto2}, {3, produto3} };
    Estoque estoque(produtos);

    estoque.listar_estoque();
    return 0;
}
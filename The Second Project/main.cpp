#include <iostream>


#include "include/Cliente.h"
#include "include/Pedido.h"
#include "include/PedidoItem.h"
#include "include/Produto.h"
using namespace std;

int main() {
    Cliente c("GIO", "11111111111", "(99)99999-9999", "gio@mail.com");
    Produto produto1(1, "PRODUTO 1", 20.00);
    Produto produto2(1, "PRODUTO 2", 30.00);
    Produto produto3(1, "PRODUTO 3", 50.00);
    PedidoItem item1(produto1, 2, 10);
    PedidoItem item2(produto2, 3, 10);
    PedidoItem item3(produto3, 5, 10);

    vector<PedidoItem> itens = {item1, item2, item3};

    Pedido p(c, "00-00-0000", itens);
    p.Gettotalpedido();

    return 0;
}
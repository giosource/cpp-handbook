#include <iostream>

#include "include/Pessoa.h"
#include "include/Cliente.h"
#include "include/Fornecedor.h"
#include "include/ParceiroComercial.h"
using namespace std;

int main() {
    ParceiroComercial p1;
    ParceiroComercial p2;

    p1.lerParceiroComercial();
    p1.exibirParceiroComercial();

    p2.lerParceiroComercial();  
    p2.exibirParceiroComercial();


    // Objectos inacessíveis
    // p1.vender(5);
    // p1.comprar(4);
    // p1.fornecer(5);
    // p1.receber(4);
    // p1.exibirParceiroComercial();


    return 0;
}
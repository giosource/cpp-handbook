#include <iostream>

#include "../include/ParceiroComercial.h"

using namespace std;

ParceiroComercial::ParceiroComercial() {
}

void ParceiroComercial::lerParceiroComercial() {

    // C++ criará várias pessoas ao instanciar um parceiroComercial
    Cliente::lerCliente();
    Fornecedor::lerFornecedor();
};
void ParceiroComercial::exibirParceiroComercial() {

    Cliente::exibirCliente();
    Fornecedor::exibirFornecedor();
};
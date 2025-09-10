#include "../include/Carro.h"
#include <iostream>

using namespace std;
Carro::Carro() {
}
Carro::Carro(string modelo, int velocidade, int distanciaPercorrida) {
    this->modelo = modelo;
    this->velocidade = velocidade;
    this->distanciaPercorrida = distanciaPercorrida;
}
Carro::~Carro() {
}
string Carro::Getmodelo() { return modelo; }
void Carro::Setmodelo(string v) { modelo = v; }
int Carro::Getvelocidade() { return velocidade; }
void Carro::Setvelocidade(int v) { velocidade = v; }
int Carro::GetdistanciaPercorrida() { return distanciaPercorrida; }
void Carro::SetdistanciaPercorrida(int v) { distanciaPercorrida = v; }
void Carro::acelerar(){
    this->velocidade++; 
}
void Carro::mover(){
    this->distanciaPercorrida += velocidade;
}
void Carro::mostrarStatus(){
    cout << "Modelo: " << Getmodelo() << endl
    << "Velocidade: " << Getvelocidade() << endl
    << "Distancia percorrida: " << GetdistanciaPercorrida() << endl;
}

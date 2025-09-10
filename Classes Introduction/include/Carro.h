#ifndef CARRO_H
#define CARRO_H
#include <string>
using namespace std;

class Carro {
	public:
		Carro();
		Carro(string modelo, int velocidade, int distanciaPercorrida);
		virtual ~Carro();
		string Getmodelo();
		void Setmodelo(string v);
        int Getvelocidade();
		void Setvelocidade(int v);
        int GetdistanciaPercorrida();
		void SetdistanciaPercorrida(int v);

		void acelerar();
		void mover();
		void mostrarStatus();
	protected:
	private:
		string modelo;
        int velocidade;
        int distanciaPercorrida;
};
#endif // CARRO_H
#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>

using namespace std;

class Jogador {
	public:
		Jogador();
		Jogador(string nome, int pontos);
		virtual ~Jogador();
		string Getnome();
		void Setnome(string v);
		int Getpontos();
		void Setpontos(int v);
		void ganharPontos(Jogador& p, int pontos);
		void perderPontos(Jogador& p, int pontos);
		void mostrarPontuacao();
		void subirNivel();
	protected:
	private:
		string nome;
		int pontos;
};
#endif // JOGADOR_H
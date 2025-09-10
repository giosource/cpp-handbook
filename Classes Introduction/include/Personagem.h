#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

using namespace std;

class Personagem {
	public:
		Personagem();
		Personagem(string nome, int vida, int forca, int nivel);
		virtual ~Personagem();
		string Getnome();
		void Setnome(string v);
		int Getvida();
		void Setvida(int v);
		int Getforca();
		void Setforca(int v);
		int Getnivel();
		void Setnivel(int v);
		void atacar(Personagem& p);
		void receberDano(Personagem& p);
		void subirNivel();
	protected:
	private:
		string nome;
		int vida;
		int forca;
		int nivel;
};
#endif // PERSONAGEM_H
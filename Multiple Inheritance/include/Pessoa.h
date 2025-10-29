#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa {
	public:
		Pessoa();
		Pessoa(string nome, string cpf);
        string Getnome();
		void Setnome(string v);

		string Getcpf();
		void Setcpf(string v);

		void lerPessoa();
		void exibirPessoa();
		
	protected:
	private:
        string nome;
		string cpf;
};

#endif // PESSOA_H
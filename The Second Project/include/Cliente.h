#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente {
	public:
		Cliente();
		Cliente(string nome, string cpf, string celular,
			string email
		);
        string Getnome();
		void Setnome(string v);

		string Getcpf();
		void Setcpf(string v);
		
		string Getcelular();
		void Setcelular(string v);
		
		string Getemail();
		void Setemail(string v);
		
		void mostrarCliente();
	protected:
	private:
        string nome;
		string cpf;
		string celular;
		string email;
};

#endif // CLIENTE_H
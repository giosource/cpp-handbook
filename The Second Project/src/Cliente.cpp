#include "../include/Cliente.h"
#include <iostream>
#include <string>

using namespace std;

Cliente::Cliente() {
}
Cliente::Cliente(string nome, string cpf, string celular,
			string email) {
    this->nome = nome;
    this->cpf = cpf;
    this->celular = celular;
    this->email = email;
}

string Cliente::Getnome() { return nome; };
void Cliente::Setnome(string v) { nome = v; };

string Cliente::Getcpf() { return cpf; };
void Cliente::Setcpf(string v) { cpf = v;};

string Cliente::Getcelular() { return celular; };
void Cliente::Setcelular(string v) { celular = v;};

string Cliente::Getemail() { return email; };
void Cliente::Setemail(string v) { email = v;};

void Cliente::mostrarCliente() {
    cout << "NOME: " << Getnome() << "\n"
    << "CPF: " << Getcpf() << "\n"
    << "CELULAR: " << Getcelular() << "\n"
    << "EMAIL: " << Getemail() << "\n"
    ;
 };
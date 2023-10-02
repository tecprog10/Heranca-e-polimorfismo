#include "Faxineiro.hpp"

Faxineiro::Faxineiro(string _nome, int _cpf) :
Empregado(_nome, _cpf, "Faxineiro")
{

}

Faxineiro::~Faxineiro()
{

}

void Faxineiro::mostraDados()
{
	cout << "Nome do faxineiro: " << nome << ", CPF: " << cpf << endl;
}

double Faxineiro::calculaSalario(int _horasTrabalhadas)
{
	// Verifica se n�o realizou hora extra
	if (_horasTrabalhadas <= 176)
		return 4.5 * _horasTrabalhadas;
	else // Calcula o sal�rio com bsae na hora extra
		return 4.5 * 176 + 6 * (_horasTrabalhadas - 176);
}
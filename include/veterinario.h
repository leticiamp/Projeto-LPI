/*
# Disciplina: Linguagem de Programação I
# Professor: Silvio Sampaio
# Alunos:
# ANDRE VITOR MACEDO SOARES
# LETICIA MOURA PINHEIRO
# ODILON JULIO DOS SANTOS
# Projeto Final "PetFera"
===========================================================================
*/

#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <string>
#include "funcionario.h"

using namespace std;

class Veterinario : public Funcionario{
	private:
		string m_crmv;
		
	protected:

	public:
		Veterinario();
		~Veterinario();

};

#endif // _VETERINARIO_H_
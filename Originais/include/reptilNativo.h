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

#ifndef _REPTIL_NATIVO_H_
#define _REPTIL_NATIVO_H_

#include <string>
#include "reptil.h"
#include "animalNativo.h"

using namespace std;

class ReptilNat : public Reptil, AnimalNat{
	private:
		
	protected:

	public:
		ReptilNat();
		~ReptilNat();

};

#endif // _REPTIL_NATIVO_H_
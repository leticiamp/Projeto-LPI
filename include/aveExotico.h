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

#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include <string>
#include "ave.h"
#include "animalExotico.h"

using namespace std;

class AveExo : public Ave, AnimalExo{
	private:
		
	protected:

	public:
		AveExo();
		~AveExo();

};

#endif // _AVE_EXOTICO_H_
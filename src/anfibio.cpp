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

#include <iostream>

//#include "data.h"
#include "anfibio.h"

//Construtor
Anfibio::Anfibio(	int id_,
								std::string classe_,
								std::string nome_cientifico_,
								char sexo_,
								double tamanho_,
								std::string dieta_,
								Veterinario * veterinario_,
								Tratador * tratador_,
								std::string nome_batismo_,
								std::string naturalidade_,
								int mudas_):
        Animal(	id_,
							classe_,
							nome_cientifico_,
							sexo_,
							tamanho_,
							dieta_,
							veterinario_,
							tratador_,
							nome_batismo_,
							naturalidade_),
        m_total_de_mudas(mudas_)
{}

//Destrutor
Anfibio::~Anfibio(){}

//get's
int Anfibio::get_m_total_de_mudas(){
  return m_total_de_mudas;
}
//set's
void Anfibio::set_m_total_de_mudas(int mudas){
  this->m_total_de_mudas = mudas;
}

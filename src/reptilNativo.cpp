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

#include "reptilNativo.h"

ReptilNat::ReptilNat(int id_,
                    std::string classe_,
                    std::string nome_cientifico_,
                    char sexo_,
                    double tamanho_,
                    std::string dieta_,
                    Veterinario * veterinario_,
                    Tratador * tratador_,
                    std::string nome_batismo_,
    								std::string naturalidade_,
                    bool venenoso_,
                    std::string tipo_veneno_,
      							std::string uf_origem_,
      							std::string auto_ibama_):
  Reptil(	id_,
          classe_,
          nome_cientifico_,
          sexo_,
          tamanho_,
          dieta_,
          veterinario_,
          tratador_,
          nome_batismo_,
          naturalidade_,
          venenoso_,
          tipo_veneno_),
  AnimalNat(uf_origem_,
        		auto_ibama_)
{}

ReptilNat::~ReptilNat(){}



std::ostream& ReptilNat::print(std::ostream& os)const{
  os << m_id << ";" << m_classe 	 << ";" << m_nome_cientifico << ";"
     << m_sexo << ";" << m_tamanho << ";" << m_dieta << ";";

     if(m_veterinario == nullptr){
       os << "0" << ";";
     }else{
       os << m_veterinario->getId() << ";";
     }

     if(m_tratador == nullptr){
       os << "0" << ";";
     }else{
       os << m_tratador->getId()	<< ";";
     }


  os << m_nome_batismo << ";" << m_naturalidade << ";"
     << m_venenoso << ";" << m_tipo_veneno << ";"
     << m_uf_origem << ";"<< m_autorizacao_ibama << std::endl;

    return os;
}

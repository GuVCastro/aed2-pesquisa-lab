/*****************************************************************************************
 * NOME DO ARQUIVO: main.c 
 * 
 * AUTOR: Gustavo Valadares Castro
 *
 * DESCRIÇÃO:	Lista telefonica usando conceitos de pesquisa em memória primária
 *
 * OBSERVAÇÕES:
 *				Repositório: https://github.com/GuVCastro/aed2-pesquisa-lab
 *				Compilador: gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0 
 *
 * MUDANÇAS:
 *				DATA		AUTOR	DETALHES
 *				2021/11/04	Gustavo	Inicio do projeto
 ****************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sequencial.h"
#include "binaria.h"
#include "arvore_binaria.h"
#include "avl.h"
#include "tabela_hash.h"

int main(void)
{
	Contato contato;
	/* Metodos Lista */
	inserirContato();
	alterarContato();
	removerContato();
	printOrdenadoNome();
	printOrdenadoData();
	
	/* Metodos Pesquisa */
	pesquisarPorCodigo();
	pesquisarPorNome();
	pesquisarPorData();
	pesquisarPorEmail();

	return 0;
}

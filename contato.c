#include <stdio.h>
#include "contato.h"

void printContato(Contato c)
{
	printf("{\n");
	printf("Codigo: %d\n", c.codigo);
	printf("Nome: %s\n", c.nome);
	printf("Data Nascimento: %d-%d-%d\n", c.dataNasc.dia, c.dataNasc.mes, c.dataNasc.ano);
	printf("Telefone: %d\n", c.telefone);
	printf("Email: %s\n", c.email);
	printf("}\n");
}

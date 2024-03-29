#include "pessoa.h" 

typedef struct Celula {
	Contato dado;
	struct Celula *prox;
} Celula;

typedef struct Lista {
	Celula *primeiro;
	Celula *ultimo;
	int tam;
} Lista;

void newLista(Lista *l);

void inserir(Lista *l, Contato p);

Contato remover(Lista *l, int codigo);

void printLista(Lista *l);

void clonarLista(Lista *l, Lista *l1);

void concatenarListas(Lista *l1, Lista *l2, Lista *l);

void inserirOrdenado(Lista *l, Contato p);

Contato verificaMaior(Lista *l);

int pesquisar(Lista *l, char *nome);

void ordenarCrescente(Lista *l);

void ordenarDecrescente(Lista *l);


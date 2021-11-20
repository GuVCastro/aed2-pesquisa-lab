#define TAM_NOME 20
#define TAM_EMAIL 40

typedef struct Data {
	int dia;
	int mes;
	int ano;
} Data;

typedef struct Contato {
	int codigo;
	char nome[TAM_NOME];
	Data dataNasc;
	int telefone;
	char email[TAM_EMAIL];
} Contato;

void printContato(Contato c);

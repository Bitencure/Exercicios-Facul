#include <stdio.h>
#include <string.h>

# define MAX 50
struct Cliente {
	char pNome[15];
	char endereco[50];
	char CPF[15];
	int nConta;
	int anoAb;
	int saldo;
	
};

typedef struct Cliente Cliente;

int main() {
	Cliente Cliente1;
	
	printf("Digite o nome do cliente: ");
	fflush(stdin);
	gets(Cliente1.pNome);
	
	printf("\nDigite o endereco do cliente: ");
	fflush(stdin);
	gets(Cliente1.endereco);
	
	printf("\nDigite o CPF do cliente: ");
	fflush(stdin);
	gets(Cliente1.CPF);
	
	printf("\nDigite o numero da conta do cliente: ");
	fflush(stdin);
	scanf("%d", &Cliente1.nConta);
	
	printf("\nDigite o ano de abertura da conta do cliente: ");
	fflush(stdin);
	scanf("%d", &Cliente1.anoAb);
	
	printf("\nDigite o saldo na conta do cliente: ");
	fflush(stdin);
	scanf("%d", &Cliente1.saldo);
	
	
	
	printf("\nO nome do cliente e: %s", Cliente1.pNome);
	printf("\nO endereco do cliente e: %s", Cliente1.endereco);
	printf("\nO CPF do cliente e: %s", Cliente1.CPF);
	printf("\nO numero da conta do cliente e: %d", Cliente1.nConta);
	printf("\nO ano de abertura da conta do cliente e: %d", Cliente1.anoAb);
	printf("\nO saldo em conta do cliente e: %d", Cliente1.saldo);
	
	
}

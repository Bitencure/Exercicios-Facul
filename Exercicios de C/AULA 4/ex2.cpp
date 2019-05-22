#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define MAX 1
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
	
	Cliente Cliente[MAX],ClienteN[MAX];
	int n,j,x,i;
	char compCPF[15];
	
	for (i=0;i<MAX;i++) {
		printf("Digite o nome do cliente: ");
		fflush(stdin);
		gets(Cliente[i].pNome);
		
		printf("Digite o endereco do cliente: ");
		fflush(stdin);
		gets(Cliente[i].endereco);
		
		printf("Digite o CPF do cliente: ");
		fflush(stdin);
		gets(Cliente[i].CPF);
		
		printf("Digite o numero da conta do cliente: ");
		fflush(stdin);
		scanf("%d", &Cliente[i].nConta);
		
		printf("Digite o ano de abertura da conta do cliente: ");
		fflush(stdin);
		scanf("%d", &Cliente[i].anoAb);
		
		printf("Digite o saldo na conta do cliente: ");
		fflush(stdin);
		scanf("%d", &Cliente[i].saldo);
	
	if (Cliente[i].saldo < 0) {
		n++;
		ClienteN[i].saldo = Cliente[i].saldo;
	}
	
	if ((2019 - Cliente[i].anoAb) == 10) {
		j++;
	}
	
}
	system("cls");
	
	printf("\nDigite 1 para exibir os resultados ou 2 para buscar dados por CPF: ");
	fflush(stdin);
	scanf("%d",&x);
	
	switch(x){
		case 1:
			printf("O numero de clientes com saldo negativo e de %d", n);
			printf("O numero de clientes com conta a mais de 10 anos e de %d", j);
			
			for (i=0;i<MAX;i++) {
				printf("\nO cliente de conta numero %d tem saldo negativo.\n", ClienteN[i].nConta );
			} 
	 	break;
		case 2:
			printf ("Digite o cpf que deseja buscar: ");
			fflush(stdin);
			gets(compCPF);
			
			for (i=0;i<MAX;i++){
			
			if (strcmp(compCPF,Cliente[i].CPF) == 0){
				printf("\nO nome do cliente e: %s", Cliente[i].pNome);
				printf("\nO endereco do cliente e: %s", Cliente[i].endereco);
				printf("\nO CPF do cliente e: %s", Cliente[i].CPF);
				printf("\nO numero da conta do cliente e: %d", Cliente[i].nConta);
				printf("\nO ano de abertura da conta do cliente e: %d", Cliente[i].anoAb);
				printf("\nO saldo em conta do cliente e: %d", Cliente[i].saldo);
			}
		} break;
	}
}

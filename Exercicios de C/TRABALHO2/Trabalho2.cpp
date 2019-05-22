#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Cliente{
	char cnpj[14];
	char atvEconomica [11];
	float consumoDados;
};

TipoCliente Le_Registros(int *num) {
	char aux;
	do {
		printf("Digite o nome do cliente %d: ", *num+1);
		gets(Cliente.cnpj);
		printf("Digite a atividade econômica do cliente %d: ", *num+1);
		gets(Cliente.atvEconomica);
		printf("Digite o consumo de dados do cliente %d: ", *num+1);
		scanf("%f", &Cliente.consumoDados);
		
		printf("Você cadastrou %d cliente(s). Deseja finalizar?[S/N]", *num+1);
		gets(aux);
		
		(*num)++;
	}
	while (aux != 'S' && aux != 's');
}

typedef struct Cliente TipoCliente;

int main() {
	TipoCliente NovoCliente[500];
	int num;
	
	Le_Registros(&num);
	printf("O numero de clientes registrados foi: %d", num);
	
}

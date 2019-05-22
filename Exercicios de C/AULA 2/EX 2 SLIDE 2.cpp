#include <stdio.h>

int main() {
	
int i=0, prod[i], preco[i], total, arrecad[i];

	for (i=0;i<5;i++) {
	
	printf("Digite a quantidade vendida do produto numero %d: ", i+1);
	fflush(stdin);
	scanf ("%d",&prod[i]);
	printf("Digite o preco do produto numero %d: ", i+1);
	fflush(stdin);
	scanf("%d",&preco[i]);

	
	arrecad[i] = prod[i] * preco[i];
	
	printf("O total arrecadado do produto %d foi de: %d\n", i+1, arrecad[i]);
	
	total = total + arrecad[i];
	}
	
	printf("\nO total arrecadado com os produtos foi de: %d", total);

}

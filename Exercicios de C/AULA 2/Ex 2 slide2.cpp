#include <stdio.h>

int main() {
	
	int i=0, v[9];
	
	for (i=0;i<10;i++) {
		
		printf("Digite o valor do digito %d: ",i+1);
		fflush(stdin);
		scanf("%d",&v[i]);
		
		v[i] = v[i] + 2;	
	}
	i=0;
	
	while (i<10) {
		
		printf("O valor armazenado na na posicao %d e de: %d\n",i+1,v[i]);
		i++;
	}
}

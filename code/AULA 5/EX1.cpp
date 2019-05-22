#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 4

float media_com_pesos (int a, int b) {
	float c;
	
	a = a * 0.4;
	b = b * 0.6;
	c = a+b;
	return (c);
}

char conceito (float a) {
	char c;
	
	if (a < 5) {
		c = 'R';
		return (c);
		
	} else if (a>=5 && a<=8.5){
		c = 'B';
		return (c);
	
	}else {
		c = 'E';
		return (c);
	}
}

int main() {
	
	float notaB[2*N], notaC[2*N], media[N];
	int i;
	char cct[N];
	
	for (i=0;i<N;i++){
		
		printf("Digite a nota 1 do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%f", &notaB[i]);
		
		printf("Digite a nota 2 do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%f", &notaC[i]);
		
		media[i] = media_com_pesos(notaB[i], notaC[i]);
		cct[i] = conceito(media[i]);
	}
	
	for (i=0;i<N;i++){
		printf("A media do aluno %d foi de : %0.1f\n, conceito %s", i+1, media[i], cct[i]);
	}
	
	
	
}

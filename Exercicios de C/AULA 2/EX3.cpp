#include <stdio.h>

#define N 5

int main () {
	
	int i, cod[N], apv[N];
	float  p1[N], p2[N], med[N];
	
	for (i=0;i<N;i++) {
		
		do {
			printf("\nDigite o codigo do aluno %d (MAX 4 DIGITOS):",i+1);
			fflush(stdin);
			scanf("%d",&cod[i]);
		} while (cod[i] > 9999);
		
		do {
			printf("\nDigite a nota p1 do aluno %d:",i+1);
			fflush(stdin);
			scanf("%f",&p1[i]);
			printf("\nDigite a nota p2 do aluno %d:",i+1);
			fflush(stdin);
			scanf("%f",&p2[i]);
		} while ((p1[i] > 10) || (p2[i] > 10) );
		
		med[i] = (p1[i] + p2[i]) / 2;
		
		if (med[i] >= 6.00) {
			
			apv[i] = cod[i];
		}
	}
	i=0;
	
	while (i<N) {
		if (apv[i] > 0 ) {
		printf("O aluno de codigo %d foi aprovado com a media de %0.1f\n",apv[i],med[i]);
		i++;
		}
	}
	
}

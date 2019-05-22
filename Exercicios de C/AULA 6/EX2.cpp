#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void triangulo (float *a, float *b, float *c, char *t) {
	
	if ((*a == *b)) {
		
		if (*a == *c){
		*t = 'E';
		}
		else *t= 'I';	
	}
	else if (*b == *c) {
		*t = 'I';
	} 
	else (*t = 'S');
	
};



int main() {
	
	float l1,l2,l3;
	char t,s;
	
	do {
		printf("Digite os lados do triângulo (um em cada linha): ");
		fflush(stdin);
		scanf("%f", &l1);
		fflush(stdin);
		scanf("%f", &l2);
		fflush(stdin);
		scanf("%f", &l3);
		triangulo(&l1,&l2,&l3, &t);
		printf("O triangulo e: %c", t);
		printf ("\nDeseja continuar? [S/N]");
		fflush(stdin);
		scanf("%c", &s);
	}while (s == 'S' || s =='s');
}

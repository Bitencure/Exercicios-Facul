#include <stdio.h>
#include <string.h>

#define N 5
#define C 15
int main() {
	
	char nome[N][C], maxAl[C];
	int i;
	float nota[N], maxn;
	
	for (i=0;i<5;i++) {
		
		fflush(stdin);
		printf("Digite do nome do aluno %d: ", i+1);
		gets(nome[i]);
		
		printf("Digite a nota do aluno %d: ", i+1);
		fflush(stdin);
		scanf("%f",&nota[N]);
		
		if (nota[i] > maxn) {
			
			maxn = nota[i];
			strcpy(maxAl, nome[i]);
		}
		
		printf("O aluno com maior nota se chama %s com a nota %f", maxAl, maxn);
		
		
	}
	
}

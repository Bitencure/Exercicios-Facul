#include <stdio.h>

int main () {
	
	double salb;
	int tserv;
	
	printf("Digite o salario base do funcionario: \n");
	scanf("%lf",&salb);
	
	printf("Digite o tempo de serviço do funcionario em anos: \n");
	scanf("%lf",&tserv);
	
	if (tserv < 2 && tserv > 0 ) {
		salb += salb * 0.03;
		
	} else if (tserv > 2 && tserv < 5) {
		salb += salb * 0.05;
		
	} else if (tserv >5 && tserv < 10) {
		salb += salb * 0.07;
		
	} else { 
		salb += salb * 0.09;
		
	} printf ("O salário reajustado do funcionario é de %.2lf\n",salb);
	
}

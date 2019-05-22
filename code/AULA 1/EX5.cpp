#include <stdio.h>

int main () {
	
	int nfilhos, i;
	double sal, msal, medsal, medfilhos, bsal;
	
	do {
		
		printf ("Digite o numero de filhos da familia %d: \n", i);
		fflush(stdin);
		scanf ("%d",&nfilhos);
		printf ("Digite o salario total da familia %d: \n", i);
		fflush(stdin);
		scanf ("%lf",&sal);
		
		if (sal > msal) {
			msal = sal;
		}
		
		if (sal < 500) {
			bsal++; 
		}
		
		medsal += sal;	
		medfilhos += nfilhos; 
		
		i++;
	} while (i< 3);
	
	medsal = medsal / i;
	medfilhos = medfilhos / i;
	bsal=(bsal/i)*100;  
	
	printf("A media do salario da populaçao pesquisada e de: %0.2lf\n", medsal);
	printf("A media do numero de filhos da populacao pesquisada e de %0.1lf:\n", medfilhos);
	printf("O maior salario entre os pesquisados e de: %0.2lf\n", msal);
	printf("O percentual de familias com salario ate R$500,00 e de: %0.2lf%\n", bsal);
	
}

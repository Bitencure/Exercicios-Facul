#include <stdio.h>

int main () {
	
	int i;
	double c;
	
	for (i=100; i<=150; i++) {
		
		c = (i-32)*5/9;
		printf ("A conversao de %dF para Celsius é de : %0.1lf \n ", i, c);
		
	}
}

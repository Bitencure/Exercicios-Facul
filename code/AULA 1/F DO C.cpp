#include <stdio.h>

int main () {
	
int f;
float c;

printf("Digite a temperatura em F: ");
fflush (stdin);
scanf ("%d",&f);

printf ("Calculando %dF para Celsius...\n", f);

c = (f-32)*5/9;

printf("%dF e igual a %fC\n",f,c);


}

#include <stdio.h>
#include <stdlib.h>

//função para calcular o discriminante de uma equação do 2º grau
int delta(int a,int b, int c, int*d)
{

*d= b*b-4*a*c;
return(*d);
}

int main()
{
int x,y,z,d;
printf("digite 3 coeficientes:");
scanf("%d%d%d", &x,&y,&z);
delta(x,y,z,&d);
printf ("discriminante: %d \n", d);
}


#include <stdio.h>
#include <stdlib.h>

//fun��o para calcular o discriminante de uma equa��o do 2� grau
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


#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[15], str2[15];
	int n;
	
	strcpy(str1, "linguagem");
	strcpy(str2, " C");
	
	strcat(str1, str2);
	
	printf(str1);
	
	n = strlen(str1);
	
	printf("\n A palavra tem tamanho %d.", n); 
	
}

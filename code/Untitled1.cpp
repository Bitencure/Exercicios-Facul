#include <stdio.h>
#include <string.h>

int main() {

	struct horario {
		int hora;
		int minuto;
		int segundo;
		
	};
	
	struct horario teste[5];
	
	teste[0].hora = 10;
	teste[0].minuto = 20;
	teste[0].segundo = 33;
	
	printf("%i : %i : %i \n", teste[0].hora, teste[0].minuto, teste[0].segundo );
	
	
	
}

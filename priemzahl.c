#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	

	if (argc == 2) {

		// Einlesen der Variabe
		int a = atoi(argv[1]);
	
		// Überprüfen der Teilbarkeit
		int x =2;
		for (x = 2 ;x <= a; x++) {
		
			if ((a % x) == 0) {
				break;
			}
			else{}
		}
		// Auswerten der Teilbarkeit/ Ausgabe
			
		if (x < a) {
			printf("%i ist keine Primzahl /n", a);
		}
		else {
			printf("%i ist eine Primzahl /n", a);
		}

		
	}

	else {
		printf("Es ist die Eingabe genau einer ganzen Zahl benötigt \n");
	}

	return 0;
}



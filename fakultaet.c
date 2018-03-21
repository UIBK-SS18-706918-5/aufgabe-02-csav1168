#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	

	if (argc == 2) {

		// Einlesen der Variabe
		int a = atoi(argv[1]);
	
		// Berechnen der Fakultät
		int x, fak = 1;
		for (x = 1 ;x <= a; x++) 
			fak=x*fak;

		//Ausgabe
		printf("Die Fakultät von %i ist %i \n", a , fak);
		int byte = sizeof(fak);
		printf("Anzahl der Bytes von Zahl: %i \n", byte);

		
	}

	else {
		printf("Es ist die Eingabe genau einer ganzen Zahl benötigt \n, ");
	}

	return 0;
}

// Nur bis a=12 möglich

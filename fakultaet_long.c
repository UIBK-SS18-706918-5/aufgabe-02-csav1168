#include <stdio.h>
#include <stdlib.h>

int main(long argc, char ** argv) {
	

	if (argc == 2) {

		// Einlesen der Variabe
		long a = atoi(argv[1]);
	
		// Berechnen der Fakultät
		long x, fak = 1;
		for (x = 1 ;x <= a; x++) 
			fak=x*fak;

		//Ausgabe
		printf("Die Fakultät von %li ist %li \n", a , fak);
		long byte = sizeof(fak);
		printf("Anzahl der Bytes von Zahl: %li \n", byte);

		
	}

	else {
		printf("Es ist die Eingabe genau einer ganzen Zahl benötigt \n, ");
	}

	return 0;
}

// Nur bis a=20 möglich

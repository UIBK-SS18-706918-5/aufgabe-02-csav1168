#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	float a;

	// Einlesen der Zahl
	a = atof(argv[1]);
	
	// Ausgabe er Vorzeichen
	if (a < 0) {
		printf("%f ist negativ! \n", a);
	}
	else if (a > 0) {
		printf("%f ist positiv! \n", a);
	}
	else {
		printf("%f ist 0! \n", a);
	}
	return 0;
}

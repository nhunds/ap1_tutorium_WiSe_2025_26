#include <stdio.h>

int main() {
	// a: Integer
	// b: Integer
	double a, b, ergebnis;
	char op, klaus = 'j';
	
	while(klaus == 'j') {
		// Ausgabe: Gib 1.Zahl
		printf("Zahl 1: \n");
		scanf("%lf", &a);
		printf("Zahl 2: \n");
		scanf("%lf", &b);

		// Summe berechnen

		printf("Welche Operation (+/-): ");
		scanf("%s", &op);

		// Wenn op == '+' dann:
		// 	Summe
		// Sonst wenn op == '-' dann:
		// 	Differenz
		// Sonst dann:
		// 	Les das Handbuch
		if(op == '+') {
			ergebnis = a + b;
			printf("Summe: %.2lf", ergebnis);
		}
		else if (op == '-' ) {
			ergebnis = a - b;
			printf("Differenz: %.2lf", ergebnis);
		}
		else {
			printf("Falscher Operator");
		}
		printf("\n");

		printf("Weiter? (j/n): ");
		scanf("%s", &klaus);
	}
	
	return 0;
}

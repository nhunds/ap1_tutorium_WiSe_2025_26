#include <stdio.h>

void swap(int * addr1, int * addr2) {
	int tmp = *addr1;
	
	*addr1 = *addr2;
	*addr2 = tmp;
}

void einlesen(int * array, int len) {
	for(int i = 0; i < len; i++) {
		printf("Bitte gib %i.Zahl ein: ", i + 1);
		scanf("%i", &array[i]);
	}
}

void ausgeben(int * array, int len) {
	for(int i = 0; i < len; i++)
		printf("%i.Zahl: %i\n", i + 1, array[i]);
}

int sum(int * array, int len) {
	int sum = 0;

	for(int i = 0; i < len; i++)
		sum += array[i];

	return sum;
}

float avg(int * array, int len) {
	return sum(array, len) / (float) len;
}

int exists(int * array, int len, int searched) {
	// schauen ob searched_for im array vorhanden ist
	// Wenn Ja:
	// 	true
	// Wenn Nein:
	// 	false
	// zurückgeben
	
	for(int i = 0; i < len; i++)
		if(array[i] == searched)
			return 1;
	
	return 0;
}

int main() {
	int x = 5, y = 2;

	swap(&x, &y);

	if(y == 5 && x == 2)
		printf("Erfolg\n");

	const int len = 5;
	int array[len];

	einlesen(array, len);
	ausgeben(array, len);

	printf("Die Summe ist %i \n", sum(array, len));
	printf("Der Durchschnitt ist %f\n", avg(array, len));

	int eingabe;
	printf("Wonach willst du suchen? ");
	scanf("%i", &eingabe);

	printf("%i existiert", eingabe);
	if(!exists(array, len, eingabe))
		printf(" nicht", eingabe);
	printf("\n");

	return 0;
}

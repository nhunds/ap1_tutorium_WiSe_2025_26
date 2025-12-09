#include <stdio.h>
#include "lib.h"

void swap(int* ptr1, int* ptr2) {
	int tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void einlesen(int* array, int len) {
	for(int i = 0;i < len; i++) {
		printf("Bitte %i.Zahl eingeben: ", i + 1);
		scanf("%i", &array[i]);
	}
}

void ausgabe(int* array, int len) {
	for(int i = 0;i < len; i++) {
		printf("Zahl %i: %i\n", i + 1, array[i]);
	}
}

int main() {
	int zahl = 3;
	printf("%i \n", zahl);
	eins(&zahl);
	printf("%i \n", zahl);
	int zahl2 = 5;
	zahl = 3;
	printf("Zahl 1:%i\tZahl 2: %i\n", zahl, zahl2);
	swap(&zahl, &zahl2);
	printf("Zahl 1:%i\tZahl 2: %i\n", zahl, zahl2);

	int array[5];
	einlesen(array, 5); ausgabe(array, 5);
}

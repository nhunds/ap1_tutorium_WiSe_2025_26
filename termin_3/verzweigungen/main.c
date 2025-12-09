#include <stdio.h>
// Menü
// 1. Hallo
// 2. Links
// 3. Rechts
// 4. Tschüss
// Eingabe: 2
// Links
// 1. Hallo
// 2. Links
// 3. Rechts
// 4. Tschüss
// Eingabe: 4
// Tschüss

int main() {
	int eingabe = 1;

	while (eingabe != 4) {
		printf("1. Hallo\n");
		printf("2. Links\n");
		printf("3. Rechts\n");
		printf("4. Tschüss\n");
		scanf("%d", &eingabe);

		switch(eingabe) {
			case 1: printf("Hallo");
	 	       	break;
	 	       case 2: printf("Links");
	 	       	break;
	 	       case 3: printf("Rechts");
	 	       	break;
	 	       case 4: printf("Tschüss");
	 	       	break;
	 	       default: printf("Falsche Eingabe");
	 	       	break;
		}
		// if (eingabe == 1) {
		// 	printf("Hallo");
		// }
		// else if (eingabe == 2) {
		// 	printf("Links");
		// }
		// else if (eingabe == 3) {
		// 	printf("Rechts");
		// }
		// else if (eingabe == 4) {
		// 	printf("Tschüss");
		// }
		// else {
		// 	printf("Falsche Eingabe");
		// }
		printf("\n");
	}

	return 0;	
}

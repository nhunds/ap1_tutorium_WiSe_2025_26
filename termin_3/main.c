#include <stdio.h>

int main() {
	int summe = 0;

	// for(int i = 1; i <= 5; i++) {
	// 	summe += i;
	// }
	int i = 1;
	while (i <= 5) {
		summe += i;
		i++;
	}

	printf("%d", summe);

	return 0;
}

#include <stdio.h>

//Item:
//	name
//	count

typedef struct Item_ {
	char name[100];
	int count;
} Item;

typedef struct Lager_ {
	Item storage[20];
	unsigned int len;
} Lager;

Lager lager;

int menu() {
	int auswahl;

	printf("(1) Lager ausgeben\n");
	printf("(2) Item einfügen\n");
	printf("(3) Bestand verändern\n");
	printf("(4) Beenden\n");
	scanf("%d", &auswahl);

	return auswahl;
}

void print_lager() {
	printf("Ausgabe Lager\n");
	for(int i = 0; i < lager.len; i++) {
		printf("Item ID: %d ", i + 1);
		printf("Item Name: %s ", lager.storage[i].name);
		printf("Item Anzahl: %d", lager.storage[i].count);
		printf("\n");
	}
}

void add_item() {
	printf("Item einfügen\n");
	printf("Item Name: ");
	scanf("%s", &lager.storage[lager.len].name);
	printf("Anzahl: ");
	scanf("%d", &lager.storage[lager.len].count);
	lager.len++;
}

void change_item_stock() {
	printf("Bestand verändern\n");
}

int main() {
	lager.len = 0;
	while(1) {
		switch(menu()) {
			case 1: print_lager();
				break;
			case 2: add_item();
				break;
			case 3: change_item_stock();
				break;
			case 4: return 0;
				break;
			default: printf("Falsche Eingabe!\n");
		}
	}

	return 0;
}



import java.util.Scanner;

public class Geldautomat {
	private static Scanner in = new Scanner(System.in);
	private static Konto konto = new Konto();
	public static void main(String[] args) {
		System.out.println("Menü:");
		System.out.println("(1) Einzahlen");
		System.out.println("(2) Auszahlen");
		int auswahl = in.nextInt();
		switch(auswahl) {
			case 1: einzahlen(); break;
			case 2: abheben(); break;
			default: System.out.println("Fehler!"); break;
		}
	}

	private static void einzahlen() {
		System.out.println("Wie viel: ");
		konto.einzahlen(in.nextDouble());
	}

	private static void abheben() {
		System.out.println("Wie viel: ");
		konto.abheben(in.nextDouble());
	}
}


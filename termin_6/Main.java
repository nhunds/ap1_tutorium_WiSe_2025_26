import java.util.Scanner;

public class Main {
	private static Scanner in = new Scanner(System.in);
	public static void main(String[] args) {
		double sum = 0.0d;
		while(true) {
			System.out.println("Bitte Zahl eingeben: ");
			double zahl = in.nextDouble();
			
			if(zahl == 0)
				break;
			
			sum += zahl;
		}

		System.out.println("Die Summe ist: " + sum);
	}
}


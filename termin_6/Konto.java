public class Konto {
	public Konto() {
		kontostand = 0.0;
	}


	private double kontostand;

	public double getKontostand() {
		return kontostand;
	}

	public void einzahlen(double betrag) {
		if (betrag < 0)
			return;

		kontostand += betrag;
	}
	public boolean abheben(double betrag) {
		if (betrag < 0)
			return false;
		if (kontostand < betrag)
			return false;

		kontostand -= betrag;
		
		return true;
	}
}

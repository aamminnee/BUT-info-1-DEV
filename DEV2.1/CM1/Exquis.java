import java.util.*;

public class Exquis {

	private String[] chaine;

	public Exquis(String[] chaine2) {
		this.chaine = chaine2;
	}

	public String toString() {
		Random hasard = new Random();
		return this.chaine[hasard.nextInt(0, this.chaine.length)];
	}
}
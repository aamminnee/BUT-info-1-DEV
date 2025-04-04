public class MainExquis {
	public static void main(String[] args) {
		String[] sujets = {"John", "Marie", "Jack"};
		String[] verbes = {"embrasse", "tue", "épouse"};
		String[] cods = {"voisin", "chien", "facteur"};
		Exquis sujet = new Exquis(sujets);
		Exquis verbe = new Exquis(verbes);
		Exquis cod = new Exquis(cods);
		for (int i = 0; i < 5; i++) { 
			System.out.println(sujet.toString() + " " + verbe.toString() + " le " + cod.toString());	
		}
	}
}
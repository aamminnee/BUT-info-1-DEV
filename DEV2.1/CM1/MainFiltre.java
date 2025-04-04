public class MainFiltre {
	public static void main(String[] args) {
		for (int i = 0; i < args.length; i++) {
			Filtre filtre = new Filtre();
			System.out.println(filtre.filtreMinuscule(args[i]));
		}
	}
}
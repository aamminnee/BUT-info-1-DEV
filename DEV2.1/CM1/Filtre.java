public class Filtre {
    public static String filtreMinuscule(String chaine) {
        String maj = chaine.toUpperCase();
        String res = "";
        for (int i = 0; i < chaine.length(); i++) {
            if (chaine.charAt(i) != maj.charAt(i)) {
                res += chaine.charAt(i);
            }
        }
        return res;
    }
}

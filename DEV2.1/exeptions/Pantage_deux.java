public class Pantage_deux {
    public static void main(String[] args) {
        try {
            String noll = null;
            System.out.println(noll.length());
        } catch(NullPointerException e) {
            System.err.println("l'objet a afficher est null ou n'existe pas");
        }
    }
}

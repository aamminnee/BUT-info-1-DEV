public class Plantage_cinq {
    public static void main(String[] args) {
        try {
            System.out.println(args[18]);
        } catch(RuntimeException e) {
            System.err.println("il ya une erreur");
        }
    }
}
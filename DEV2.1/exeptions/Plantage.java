public class Plantage {
    public static void main(String[] args) {
        try {
            System.out.println(args[18]);
        } catch(ArrayIndexOutOfBoundsException e) {
            System.err.println("pas assez d'argument");
        }
    }
}
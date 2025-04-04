public class Progression {
    public static void main(String[] args) {
        Compteur x = new Compteur();
        while (!x.toString().equals("1010")) {
            x.plusUn();
            System.out.println(x.toString());
        }
    }
}

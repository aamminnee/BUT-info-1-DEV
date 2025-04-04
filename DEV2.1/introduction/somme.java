public class somme {
    public static void main(String[] args) {
        int reponse = 0;
        for (int i = 0; i < args.length; i++) {
            reponse += Integer.parseInt(args[i]);
        }
        System.out.println("somme = " + reponse);
    }
}

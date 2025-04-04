public class grille {
    public static void main(String[] args) {
        int lvl = Integer.parseInt(args[0]);
        for(int n = 0; n < lvl - 1; n++) { 
            System.out.print("+-");
        }
        System.out.println("+");
        for(int i = 0; i < lvl; i++) {
            for(int j = 0; j < lvl; j++) {
                System.out.print("| ");
            }
            System.out.println();
            for(int n = 0; n < lvl - 1; n++) { 
                System.out.print("+-");
            }
            System.out.println("+");
        } 
    }
}

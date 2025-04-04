import java.util.Arrays;

public class tri {
    public static void main(String[] args) {
        int tab[] = new int[args.length];
        for (int i = 0; i < args.length; i++) {
            tab[i] = Integer.parseInt(args[i]);
        }
        Arrays.sort(tab);
        for (int i = 0; i < tab.length; i++) {
            System.out.print(tab[i] + " ");   
        }
        System.out.println(); 
    }
}

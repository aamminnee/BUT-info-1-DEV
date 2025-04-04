public class Documentation {
    // 1) java.lang
    // 2) java.lang.Object    
    // 3) 15 méthodes sont hérité
    // 4) 11 sur les 15
    public static void main(String[] args) {
        //for (int i = 0; i < args.length; i++) {
            //System.out.print(args[i].toUpperCase() + " ");
        //}
        for (int i = 0; i < args.length; i++) {
            System.out.print(Integer.toHexString(Integer.parseInt(args[i], 8)) + " ");
        }
    System.out.println(" ");
    }
}   

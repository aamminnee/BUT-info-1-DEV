public class Plantage_trois {
    public static void main(String[] args) {
        try {
            System.out.println((1 + 1) / 0);
        } catch(ArithmeticException e) {
            System.err.println("on ne peut pas diviser par 0");
        }
    }
}   

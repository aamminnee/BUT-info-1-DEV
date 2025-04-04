public class Plantage_quatre {
    public static void main(String[] args) {
        try {
            int a = Integer.parseInt("abcefg");
        } catch(NumberFormatException e) {
            System.err.println("tu utilise mal les conversions en java");
        }
    }   
}

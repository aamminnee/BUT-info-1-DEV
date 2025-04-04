public class Test_Lendemains {
    public static void main(String[] args) {
        Lendemains ajd = new Lendemains(2025, 12, 30);
        Lendemains demain = ajd.demain();
        System.out.println(demain.toString());
    }
}

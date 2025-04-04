public class Capture {

    public void afficher() {
        System.out.println((1 + 1) / 0);
    }

    public static void main(String[] args) {
        Capture cap = new Capture();
        try {
            cap.afficher();
        } catch(ArithmeticException e) {
            System.err.println("on ne peut pas diviser par 0");
        }
    }
}  

// rien ne change dans l'execution .

// je vais donc deplacer la capture de l'exeptions

// rien ne change dans l'execution .
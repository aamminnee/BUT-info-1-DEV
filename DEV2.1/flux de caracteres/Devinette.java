import java.util.Scanner;
import java.util.Random;
public class Devinette {

    public static void main(String[] args) {
        Random rand = new Random();
        int nombreSecret = rand.nextInt(100) + 1; // nombre entre 1 et 100
        int essaisMax = 5;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Bienvenue dans le jeu de devinette !");
        System.out.println("J'ai choisi un nombre entre 1 et 100.");
        System.out.println("Tu as " + essaisMax + " tentatives pour le deviner.");

        boolean trouve = false;

        for (int i = 1; i <= essaisMax; i++) {
            System.out.print("Tentative " + i + " : Devine le nombre → ");

            // Vérifier si l'entrée est bien un entier
            if (!scanner.hasNextInt()) {
                System.out.println("Veuillez entrer un nombre entier.");
                scanner.next(); // On vide l'entrée invalide
                i--; // Ne pas compter cette tentative
                continue;
            }

            int tentative = scanner.nextInt();

            if (tentative == nombreSecret) {
                System.out.println("Bravo ! Tu as deviné le nombre en " + i + " tentative(s) !");
                trouve = true;
                break;
            } else if (tentative < nombreSecret) {
                System.out.println("+ (Le nombre est plus grand)");
            } else {
                System.out.println("- (Le nombre est plus petit)");
            }
        }

        if (!trouve) {
            System.out.println("Dommage ! Le nombre à deviner était : " + nombreSecret);
        }

        scanner.close();
    }
}

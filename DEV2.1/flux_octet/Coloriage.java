import javax.swing.*;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import javax.imageio.ImageIO;

public class Coloriage {

    private int[][] conversionUtilisateur(String[] chaines) {
        int[][] rgb = new int[chaines.length][3];
        for (int i = 0; i < chaines.length; i++) {
            try {
                int couleur = Integer.parseInt(chaines[i].substring(1), 16); // Suppression du '#' si présent
                rgb[i][0] = (couleur >> 16) & 0xFF; // Rouge
                rgb[i][1] = (couleur >> 8) & 0xFF;  // Vert
                rgb[i][2] = couleur & 0xFF;         // Bleu
            } catch (NumberFormatException e) {
                System.out.println("Erreur de conversion : " + e.getMessage());
                return null;
            }
        }
        return rgb;
    }

    public Coloriage(String filePath, String[] chaines) {
        int width = 768;
        int height = 1024;
        int[][] rgb = conversionUtilisateur(chaines);

        if (rgb == null) {
            JOptionPane.showMessageDialog(null, "Erreur : couleurs invalides.");
            return;
        }

        BufferedImage image = new BufferedImage(width, height, BufferedImage.TYPE_INT_RGB);

        if (rgb.length == 1) {
            // Remplir l'image avec une seule couleur
            int color = (rgb[0][0] << 16) | (rgb[0][1] << 8) | rgb[0][2];
            for (int y = 0; y < height; y++) {
                for (int x = 0; x < width; x++) {
                    image.setRGB(x, y, color);
                }
            }
        } else if (rgb.length == 2) {
            // Créer un damier avec deux couleurs
            int color1 = (rgb[0][0] << 16) | (rgb[0][1] << 8) | rgb[0][2];
            int color2 = (rgb[1][0] << 16) | (rgb[1][1] << 8) | rgb[1][2];
            int squareSize = width / 8; // Taille d'une case du damier

            for (int y = 0; y < height; y++) {
                for (int x = 0; x < width; x++) {
                    boolean isColor1 = ((x / squareSize) + (y / squareSize)) % 2 == 0;
                    image.setRGB(x, y, isColor1 ? color1 : color2);
                }
            }
        } else {
            JOptionPane.showMessageDialog(null, "Erreur : le nombre de couleurs doit être 1 ou 2.");
            return;
        }

        // Sauvegarder l'image dans un fichier
        try {
            ImageIO.write(image, "png", new File(filePath));
            System.out.println("Image générée avec succès : " + filePath);
        } catch (IOException e) {
            e.printStackTrace();
            JOptionPane.showMessageDialog(null, "Erreur lors de la sauvegarde de l'image : " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        System.out.println("Arguments received: " + java.util.Arrays.toString(args));
        if (args.length < 2 || args.length > 3) {
            System.out.println("Usage : java Coloriage <chemin_fichier> <couleur1> [<couleur2>]");
            return;
        }
    
        String filePath = args[0];
        String[] couleurs = args.length == 3 ? new String[]{args[1], args[2]} : new String[]{args[1]};
        new Coloriage(filePath, couleurs);
    }
}
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;

public class CouleursX11 extends JFrame {
    private static final String RGB_FILE = "/usr/share/X11/rgb.txt";  // Chemin vers rgb.txt sur Linux (ajuster pour Windows si nécessaire)
    private List<String[]> couleurs = new ArrayList<>();
    private int index = 0;

    public CouleursX11() {
        // Chargement des couleurs à partir du fichier
        chargerCouleurs();

        // Paramètres de la fenêtre
        setTitle("Couleurs X11");
        setSize(400, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Panneau d'affichage des couleurs
        JPanel panneau = new JPanel();
        panneau.setLayout(new GridLayout(2, 1)); // Affichage de deux couleurs

        // Labels pour afficher les couleurs
        JLabel label1 = new JLabel();
        JLabel label2 = new JLabel();
        panneau.add(label1);
        panneau.add(label2);

        // Mise à jour des couleurs dans les labels
        updateCouleurs(label1, label2);

        // Ajout de la gestion de la molette
        addMouseWheelListener(new MouseAdapter() {
            @Override
            public void mouseWheelMoved(MouseWheelEvent e) {
                // Détection de direction de la molette
                if (e.getWheelRotation() < 0) {
                    // Molette vers le haut -> avancer
                    index = (index + 1) % couleurs.size();
                } else {
                    // Molette vers le bas -> reculer
                    index = (index - 1 + couleurs.size()) % couleurs.size();
                }
                updateCouleurs(label1, label2);  // Met à jour les couleurs affichées
            }
        });

        add(panneau);
    }

    // Fonction de chargement du fichier rgb.txt
    private void chargerCouleurs() {
        try (BufferedReader reader = new BufferedReader(new FileReader(RGB_FILE))) {
            String ligne;
            while ((ligne = reader.readLine()) != null) {
                // On ignore les lignes vides ou celles qui commencent par #
                if (ligne.trim().isEmpty() || ligne.startsWith("#")) continue;
                
                // Split pour récupérer les données : "R G B nom_de_couleur"
                String[] parts = ligne.trim().split("\\s+");
                if (parts.length >= 4) {
                    String[] couleur = {parts[0], parts[1], parts[2], parts[3]};  // R, G, B, nom
                    couleurs.add(couleur);
                }
            }
        } catch (IOException e) {
            System.err.println("Erreur de lecture du fichier rgb.txt: " + e.getMessage());
        }
    }

    // Fonction pour mettre à jour les labels avec les deux couleurs actuelles
    private void updateCouleurs(JLabel label1, JLabel label2) {
        String[] couleur1 = couleurs.get(index);
        String[] couleur2 = couleurs.get((index + 1) % couleurs.size());

        // Format de la couleur: RGB -> (R, G, B) comme couleur en hexadécimal
        String hexCouleur1 = String.format("#%02X%02X%02X", Integer.parseInt(couleur1[0]), Integer.parseInt(couleur1[1]), Integer.parseInt(couleur1[2]));
        String hexCouleur2 = String.format("#%02X%02X%02X", Integer.parseInt(couleur2[0]), Integer.parseInt(couleur2[1]), Integer.parseInt(couleur2[2]));

        // Affichage du nom et de la couleur dans le label
        label1.setText(couleur1[3] + " : " + hexCouleur1);
        label1.setOpaque(true);
        label1.setBackground(Color.decode(hexCouleur1));

        label2.setText(couleur2[3] + " : " + hexCouleur2);
        label2.setOpaque(true);
        label2.setBackground(Color.decode(hexCouleur2));

        // Mise à jour du rendu
        label1.setHorizontalAlignment(SwingConstants.CENTER);
        label2.setHorizontalAlignment(SwingConstants.CENTER);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            // Créer et afficher l'application
            CouleursX11 app = new CouleursX11();
            app.setVisible(true);
        });
    }
}

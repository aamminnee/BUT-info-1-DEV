import javax.swing.*;
import java.awt.*;

public class Saisie {
    public static void main(String[] args) {
        Color vert = new Color(0, 255, 0);
        Color noir = new Color(0, 0, 0);
        Color gris = new Color(128, 128, 128);
        JFrame fenetre = new JFrame();
        fenetre.setSize(1080, 720);
        fenetre.setLocation(100, 100);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JTextField etiquette = new JTextField();
        etiquette.setHorizontalAlignment(JLabel.CENTER);
        JTextArea etiquette2 = new JTextArea();
        etiquette2.setForeground(vert);
        etiquette.setForeground(vert);
        etiquette2.setBackground(gris);
        etiquette.setBackground(noir);
        fenetre.add(etiquette, BorderLayout.SOUTH);
        fenetre.add(etiquette2, BorderLayout.CENTER);
        fenetre.setVisible(true);
    }  
}
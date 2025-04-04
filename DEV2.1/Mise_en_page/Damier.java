import javax.swing.*;
import java.awt.*;


public class Damier {
    public static void main(String[] args) { 
        Color WHITE = new Color(255, 255, 255);
        Color CYAN = new Color(43, 255, 255);
        JFrame fenetre = new JFrame();
        fenetre.setSize(300, 300);
        fenetre.setLocation(100, 100);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        GridLayout gestionnaire = new GridLayout(5, 5);
        fenetre.setLayout(gestionnaire);
        for(int i = 0; i <25; i++) { 
            JPanel bouton = new JPanel();
            if (i % 2 == 1) {
                bouton.setBackground(WHITE);
            } else {
                bouton.setBackground(CYAN);
            }
            fenetre.add(bouton);
        }
        fenetre.setVisible(true);
    }   
}

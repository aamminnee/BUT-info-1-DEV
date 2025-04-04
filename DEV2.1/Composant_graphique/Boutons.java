import javax.swing.*;
import java.awt.*;
 
public class Boutons {
  public static void main(String[] args) {
    JFrame fenetre = new JFrame();
    fenetre.setSize(500, 300);
    fenetre.setLocation(0, 0);
    fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    JButton bouton1 = new JButton("Bouton 1");
    bouton1.setVerticalAlignment(JLabel.CENTER);
    fenetre.add(bouton1, BorderLayout.NORTH);
    JButton bouton2 = new JButton("Bouton 2");
    bouton2.setVerticalAlignment(JLabel.CENTER);
    fenetre.add(bouton2, BorderLayout.WEST);
    JButton bouton3 = new JButton("Bouton 3");
    bouton3.setVerticalAlignment(JLabel.CENTER);
    fenetre.add(bouton3, BorderLayout.CENTER);
    JButton bouton4 = new JButton("Bouton 4");
    bouton4.setVerticalAlignment(JLabel.CENTER);
    fenetre.add(bouton4, BorderLayout.EAST);
    JButton bouton5 = new JButton("Bouton 5");
    bouton5.setVerticalAlignment(JLabel.CENTER);
    fenetre.add(bouton5, BorderLayout.SOUTH);
    JLabel etiquette = new JLabel("Sirocco");
    etiquette.setHorizontalAlignment(JLabel.CENTER);
    fenetre.add(etiquette, BorderLayout.SOUTH);
    JLabel etiquette2 = new JLabel("Sirocco");
    etiquette2.setHorizontalAlignment(JLabel.CENTER);
    fenetre.add(etiquette2, BorderLayout.NORTH);
    JLabel etiquette3 = new JLabel("Sirocco");
    etiquette3.setHorizontalAlignment(JLabel.CENTER);
    fenetre.add(etiquette3, BorderLayout.WEST);
    JLabel etiquette4 = new JLabel("Sirocco");
    etiquette4.setHorizontalAlignment(JLabel.CENTER);
    fenetre.add(etiquette4, BorderLayout.EAST);
    JLabel etiquette5 = new JLabel("Sirocco");
    etiquette5.setHorizontalAlignment(JLabel.CENTER);
    fenetre.add(etiquette5, BorderLayout.CENTER);
    fenetre.setVisible(true);
  }
}

// CA ECRASE LES ELEMENT SUR LES ANCIENS DANS UNE ZONE DONNÉE
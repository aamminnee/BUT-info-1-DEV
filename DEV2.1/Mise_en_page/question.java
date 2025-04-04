import javax.swing.*;
import java.awt.*;


public class question {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame();
        fenetre.setSize(400, 200);
        fenetre.setLocation(100, 100);
        GridLayout gestionnaire = new GridLayout(2, 1);
        fenetre.setLayout(gestionnaire);
        JLabel txt = new JLabel("Aimez-vous les chiens ?");
        txt.setHorizontalAlignment(JLabel.CENTER);
        JPanel panneau = new JPanel();
        JButton oui = new JButton("oui");
        JButton non = new JButton("non");
        JButton NSPP = new JButton("NSPP");
        fenetre.add(txt);
        panneau.add(oui);
        panneau.add(non);
        panneau.add(NSPP);
        fenetre.add(panneau);
        fenetre.setVisible(true);
    }
}

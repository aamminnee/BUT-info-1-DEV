import javax.swing.*;
import java.awt.*;
 
public class Choix {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame();
        fenetre.setSize(300, 300);
        fenetre.setLocation(100, 100);
        fenetre.setMinimumSize(new Dimension(300, 300));
        fenetre.setMaximumSize(new Dimension(5300,300));
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JRadioButton etiquette = new JRadioButton("Gryfondorr");
        JRadioButton etiquette2 = new JRadioButton("Serpentard");
        JRadioButton etiquette3 = new JRadioButton("Serdaigle");
        JRadioButton etiquette4 = new JRadioButton("Poutsouffle");
        ButtonGroup ensemble = new ButtonGroup();
        ensemble.add(etiquette);
        ensemble.add(etiquette2);
        ensemble.add(etiquette3);
        ensemble.add(etiquette4);
        fenetre.add(etiquette, BorderLayout.NORTH);
        fenetre.add(etiquette2, BorderLayout.CENTER);
        fenetre.add(etiquette3, BorderLayout.SOUTH);
        fenetre.add(etiquette4, BorderLayout.WEST);
        fenetre.setVisible(true); 
    }
}

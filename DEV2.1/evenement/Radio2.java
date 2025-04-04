import javax.swing.*;
import java.awt.*;

public class Radio2 {
    public static void main(String[] args) {

        //initialisation des composantes graphique
        JFrame fenetre = new JFrame("Radio");
        JRadioButton cyan = new JRadioButton("Cyan");
        JRadioButton jaune = new JRadioButton("Jaune");
        JRadioButton magenta = new JRadioButton("Magenta");
        JPanel gestionnaire = new JPanel (new FlowLayout(FlowLayout.CENTER, 10, 10));
        ControleurBouton cyan_ControleurBouton = new ControleurBouton(Color.CYAN, gestionnaire);
        ControleurBouton magenta_ControleurBouton = new ControleurBouton(Color.MAGENTA, gestionnaire);
        ControleurBouton jaune_ControleurBouton = new ControleurBouton(Color.YELLOW, gestionnaire);
        
        // ajout des composants dans la fenetre
        gestionnaire.add(cyan);
        gestionnaire.add(jaune);
        gestionnaire.add(magenta);
        fenetre.add(gestionnaire, BorderLayout.CENTER);

        // implementations des actions
        cyan.addActionListener(cyan_ControleurBouton);
        magenta.addActionListener(magenta_ControleurBouton);
        jaune.addActionListener(jaune_ControleurBouton);
        
        // configuration fenetre
        fenetre.setSize(500, 500);
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fenetre.setVisible(true);
    }
}

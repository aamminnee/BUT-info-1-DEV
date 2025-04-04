import javax.swing.*;
import java.awt.GridLayout;
import java.awt.Dimension;


public class Rose {
    public static void main(String[] args) {
        JFrame fenetre = new JFrame();
        fenetre.setSize(300, 300);
        fenetre.setLocation(100, 100);
        fenetre.setMinimumSize(new Dimension(300, 300));
        fenetre.setMaximumSize(new Dimension(5300,300));
        fenetre.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        String[] txt = {"Mystral", "Tramontane", "Grec", "Ponant", "     ", "Levant", "Libeccio", "Marin", "Sirocco"};
        GridLayout  gestionnaire = new GridLayout(3, 3);
        fenetre.setLayout(gestionnaire);
        for (int i = 0; i < 9; i++) {
            JLabel titre = new JLabel(txt[i]);
            titre.setHorizontalAlignment(JLabel.CENTER);
            fenetre.add(titre);
        }
        fenetre.setVisible(true);
    }
}
